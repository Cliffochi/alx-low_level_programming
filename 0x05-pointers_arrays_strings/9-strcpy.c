#include "main.h"

/**
 * *_strcpy - copies the pointed string to src and buffer point to dest
 * @dest: string character
 * @src: character type string
 * Return: pointer is set to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
