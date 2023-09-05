#include "main.h"
#include "stdlib.h"

/**
 * _strdup - Duplicate a string using malloc
 * @str: string to duplicate
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a;
	int b, c;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		;

	a = malloc(b * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < b; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
