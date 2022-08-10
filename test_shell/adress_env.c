#include <stdio.h>
int main(int argc, char **argv, char **env)
{
	extern char **environ;

	(void)argc;

	(void)argv;

	printf("address env = %p ", (void *)env);

	printf("address environ = %p ", (void *)environ);

	return (0);
}


