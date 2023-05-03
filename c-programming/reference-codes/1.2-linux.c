/* Getting started with linux.

Figure out what directory you're in:
    -   pwd

List content of current directory. Think "List":
    -   ls

Get more information with a flag. Think "List Long":
    -   ls -l

Get all files (including hidden). Think List All":
    -   ls -a

You can combine flags. Think "List Long All":
    -   ls -la

Change current directory to a new directory 'directoryname':
    -   cd directoryname

Change current directory up one directory:
    -   cd ..

You can also use an absolute path over relative path.
Where / starts from root of directory structure:
    -   cd /absolute/path

Shortcut to change to home directory:
    -   cd ~

Change to directory within home directory (to show variety):
    -   cd ~/folderInHomeDirectory

List the files of two directories up:   
    -   ls ../..

Change directory up two directories and then in to 'directory':
    -   cd ../../directoryname

Create a file:
    -   touch filename.c

Remember, you can verify it was created:
    -   ls -la

Move a file to a directory inside root directory:
    -   mv filename.c /directoryname

Rename a file. Same command as moving a file:
    -   mv before.c after.c

We can delete a file with:
    -   rm test.c

remove a directory:
    -   rm -r directoryname

Create a directory:
    -   mkdir test

Make multiple directories:
    -   mkdir folder1 folder2

Print something back to console:
    -   echo "Hello World"

Write to file (overwrite):
    -   echo "Hello World" > output

See file content:
    -   cat output

Write to file (append):
    -   echo " Nice to meet you" >> output

Verify nothing was destroyed:
    -   cat output

Output any command to a file
    -   ls -la > lsOutput

Another way to read a file
    -   less lsOutput

*/