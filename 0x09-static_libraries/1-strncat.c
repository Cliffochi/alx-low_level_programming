#include "main.h"

/**
 * _strncat - concat 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: number of elements to concat in
 * Return: pointer bact to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0' && n > 0; b++, n--, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
