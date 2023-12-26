#!/usr/bin/python3

import os


def say_hello(to: str=None) -> None:
    """
    Says hello to someone you want. If you don't provide one, the one of the
    logged in user is used by default.

    Args:
        to (str): the name of the person. Defaults to None
    """
    print(f"Hello {to or os.getenv('USER')}!")


if __name__ == "__main__":
    say_hello()
