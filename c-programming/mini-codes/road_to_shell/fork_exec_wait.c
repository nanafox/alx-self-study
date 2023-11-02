#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * main - runs five processes with the same parent PID
 *
 * Task: Write a program that executes the command `ls -l /tmp` in 5 different
 *		child processes. Each child should be created by the same process
 *		(the father). Wait for a child to exit before creating a new child.
 *
 * Return: 0
 */
int main(void)
{
	int i, status;
	pid_t pid, child_pids[5] = {0};
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		child_pids[i] = fork();
		if (child_pids[i] == -1)
		{
			perror("fork");
			return (-1);
		}

		pid = getpid();
		if (child_pids[i] == 0) /* check if we are in child process */
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("execve");
				return (-1);
			}
		}
		else
		{
			wait(&status); /* wait for your child */

			printf("\nChild: [%d]\npid: [%d]\n", i + 1, child_pids[i]);
			printf("Parent PID: %d\n", pid);
		}
	}

	return (0);
}
