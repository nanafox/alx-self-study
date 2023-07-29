#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
#include <time.h>

int file_permission(char *filename);
int file_metadata(char *filename);

/**
 * main - getting file metadata. Unix's stat command version
 *
 * @argc: args counter
 * @argv: cmdline args... requires filenames
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "usage: %s filename...\n", argv[0]);
		return (1);
	}

	for (int i = 1; i < argc; i++)
		file_metadata(argv[i]);
	return (0);
}

/**
 * file_metadata - print metadata
 *
 * @filename: filename
 *
 * Return: 0 on success, -1 on error
 */
int file_metadata(char *filename)
{
	printf("%s:\n", filename); /* name of file */
	struct stat buf;

	if (stat(filename, &buf) < 0)
	{
		printf("\tCannot stat it -- errno=%d\n", errno);
		return (-1);
	}
	printf("\tDevice ID:\t\t%ld\n", buf.st_dev);
	printf("\tInode no:\t\t%ld\n", buf.st_ino);
	printf("\tFile mode:\t\t%o\n", buf.st_mode);

	/* access permission */
	file_permission(filename);

	/* all other file metadata */
	printf("\tHard links:\t\t%ld\n", buf.st_nlink);
	printf("\tOwner UID:\t\t%d\n", buf.st_uid);
	printf("\tGroup GID:\t\t%d\n", buf.st_gid);
	printf("\tSpecial ID:\t\t%ld\n", buf.st_rdev);
	printf("\tFile size:\t\t%ld\n", buf.st_size);
	printf("\tBlk size:\t\t%ld\n", buf.st_blksize);
	printf("\tBlk count:\t\t%ld\n", buf.st_blocks);
	printf("\tAccess time:\t\t%s", ctime(&buf.st_atime));
	printf("\tCreation time:\t\t%s", ctime(&buf.st_ctime));
	printf("\tModification time:\t%s", ctime(&buf.st_mtime));

	return (0);
}

/**
 * file_permission - checks the permissions of a file
 *
 * @filename: filename
 *
 * Return: 0 on success, -1 on error
 */
int file_permission(char *filename)
{
	struct stat buf;

	if (stat(filename, &buf) < 0)
	{
		printf("\tCannot stat it -- errno=%d\n", errno);
		return (-1);
	}

	if (buf.st_mode & S_IFREG)
		printf("\t\t\t\tordinary file\n");
	if (buf.st_mode & S_IFDIR)
		printf("\t\t\t\tdirectory\n");
	if (buf.st_mode & S_IRUSR)
		printf("\t\t\t\treadable for owner\n");
	if (buf.st_mode & S_IWUSR)
		printf("\t\t\t\twritable for owner\n");
	if (buf.st_mode & S_IXUSR)
		printf("\t\t\t\texecutable for owner\n");
	if (buf.st_mode & S_IRGRP)
		printf("\t\t\t\treadable for group\n");
	if (buf.st_mode & S_IWGRP)
		printf("\t\t\t\twritable for group\n");
	if (buf.st_mode & S_IXGRP)
		printf("\t\t\t\texecutable for group\n");
	if (buf.st_mode & S_IROTH)
		printf("\t\t\t\treadable for others\n");
	if (buf.st_mode & S_IWOTH)
		printf("\t\t\t\twritable for others\n");
	if (buf.st_mode & S_IXOTH)
		printf("\t\t\t\texecutable for others\n");

	return (0);
}
