#!/usr/bin/env python3

import cmd
import sys
import os
import shlex

class Console(cmd.Cmd):
    intro = f"Console on {sys.platform}. Type help or ? to list commands.\n"
    if os.isatty(sys.stdin.fileno()):
        prompt = "console:$ "
    else:
        prompt = ""

    nohelp = "No help found on %s"

    def do_hello(self, name):
        """Says hello to the user

        Args:
            name (str): The name of the user
        """
        if name is None or name == "":
            self.help_hello()
            return
        if len(shlex.split(name)) != 1:
            self.help_hello()
            return

        print("Hello {:s}".format(name.replace('"', '')))

    def help_hello(self):
        print("Prints hello to the user.\nUsage: hello <username>")

    def emptyline(self):
        """Handles empty lines... Does nothing."""
        pass

    @staticmethod
    def do_EOF(_):
        """Handles the Ctrl+D signal"""
        if (os.isatty(sys.stdout.fileno())):
            print()
        return True

    @staticmethod
    def do_exit(_):
        """Exits the console"""
        return True

    def precmd(self, line):
        """Turns on case insensitivity"""
        if not line or line == "":
            return ""

        line = line.split()
        if line[0] != "EOF":
            line[0] = line[0].lower()
        elif line[0] == "HELP":
            print(" ".join(word.lower() for word in line))
            return " ".join(word.lower() for word in line)

        return " ".join(line)

    def preloop(self):
        print("Starting Console...\n")

    def default(self, line):
        print("Invalid command: {:s}".format(line.split()[0]))

    def do_shell(self, line):
        os.system(line)


if __name__ == "__main__":
    try:
        Console().cmdloop()
    except KeyboardInterrupt:
        print("\nCtrl + C received... Exiting")
        exit(1)
