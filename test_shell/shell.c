#include "shell.h"
/**
 * main -handle  end of file condition
 *
 * Return: Always 0
 */
int main(void)
{
	char *line = NULL;
	char **arg;
	size_t bufsize = 0;

	while (1)
	{
		printf("#cisfun$ ");
		if (getline(&line, &bufsize, stdin) == -1)
		{
			write(1, "\n", 1);
			break;
		}
		arg = split_line(line);
		execute_line(arg);
		free(line);
		free(arg);
	}
	return (0);
}
