#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: negative or positive integer
 */

int _strcmp(char *s1, char *s2)
{
	int p;

	for (p = 0; s1[p] != '\0' || s2[p] != '\0'; p++)
	{
		if (s1[p] != s2[p])
			return (s1[p] - s2[p]);
	}
	return (0);
}
