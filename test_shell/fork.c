#include <stdio.h>
#include <unistd.h>
/**
* main - fork example
*
* Return: Always 0.
*/
int main(void)
{
	pid_t my_pid;

	pid_t pid;

	printf("Before fork ");

	pid = fork();

	if (pid == -1)
	{
		perror("Error:");

		return (1);

	}

	printf("After fork ");

	my_pid = getpid();

	printf("My pid is %u ", my_pid);

	return (0);
}
