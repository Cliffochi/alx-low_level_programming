#include "main.h"

/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */

char *_strchr(char *s, char c)
{
	unsigned int q = 0;

	for (; *(s + q) != '\0'; q++)
		if (*(s + q) == c)
			return (s + q);
	if (*(s + q) == c)
		return (s + q);
	return ('\0');
}
