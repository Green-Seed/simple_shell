#include "shell.h"
/**
 * _strlen - return length of string
 * @s: char type
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strcpy - make it
 * @dest: make it
 * @src: make it
 * Return: the vaule of dest
 */
char *_strcpy(char *dest, char *src)
{
	int cont;

	for (cont = 0; src[cont] != '\0'; cont++)
	{
		dest[cont] = src[cont];
	}
	dest[cont] = '\0';
	return (dest);
}
/**
 * add_node_end - append node to list pointed
 * @head: pointer to pointer
 * @*dir:  initialize new node
 * Return: new or NULL
 */
list_p *add_node_end(list_p **head, const char *dir)
{
	list_p *last = *head;
	list_p *new = malloc(sizeof(list_p));


	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->dir = _strdup((char *)dir);
	if (last)
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;
	return (new);
}
/**
 * print_list - prints all of the elements of a list_p list
 * if str is NULL, print [0] (nil)
 * @h: pointer to list_p element
 * Return: the num of nodes
 */
size_t print_list(const list_p *h)
{
	unsigned int index = 0;

	while (h != NULL)
	{
		if (!h->dir)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->dir);

		h = h->next;
		index++;
	}
	return (index);
}
/**
 * str_concat - concatenates two strings
 * @s1: point to string
 * @s2: point to string
 * Return: pointer to point a newly allocated
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int i, j, k;

	for (i = 0; s1 && s1[i]; ++i)
		;
	for (j = 0; s2 && s2[j]; ++j)
		;
	cat = (char *)malloc((i + j + 1) * sizeof(char));
	if (cat == NULL)
		return (NULL);
	k = 0;
	for (i = 0; s1 && s1[i]; ++i)
	{
		cat[k] = s1[i];
		++k;
	}
	for (j = 0; s2 && s2[j]; ++j)
	{
		cat[k] = s2[j];
		++k;
	}
	cat[k] = '\0';
	return (cat);
}
/**
 * _strdup - returns a pointer to a newly allocated space in the memory
 * @str: string given as a parameter
 * Return: pointer to the duplicate string or NULL
 */
char *_strdup(char *str)
{
	int i, j;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (dup == NULL)
		return (dup);
	for (j = 0; j <= i; ++j)
		dup[j] = str[j];
	return (dup);
}
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @size: size in bytes of the allocated space for ptr
 * @size: new size, in bytes of the new memory block
 * Return: new allocate memory or NULL
 */
char **_realloc(char **ptr, size_t size)
{
	char **new;
	size_t i;

	new = malloc(sizeof(char *) * (size));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new[i] = ptr[i];
	}
	return (new);
}
