#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#define TOK_DELIM " \t\r\n"
/**
 * struct list_p - singly linked list
 * @dir: string - (malloc'ed string)
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * fore directories of PATH
 */
typedef struct list_path
{
	char *dir;
	struct list_path *next;
} list_p;

int main(int ac, char **av);
int main(int ac, char **av, char **env);
int main(int ac, char **av, char **env);
extern char **environ;
int main(void);
int main(void);
int execute(int *forked);
int main(int ac, char **av);
char **tokenaization(char *str);
void execute_line(char **arg);
char *read_line(void);
char **split_line(char *line);
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);
#endif
