#include "main.h"

/**
 * leet - encode string to 1337
 * @s: string
 * Return: encoded string to s
 */

char *leet(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		while (s[k] == 'a' || s[k] == 'A')
			s[k] = '4';
		while (s[k] == 'e' || s[k] == 'E')
			s[k] = '3';
		while (s[k] == 'o' || s[k] == 'O')
			s[k] = '0';
		while (s[k] == 't' || s[k] == 'T')
			s[k] = '7';
		while (s[k] == 'l' || s[k] == 'L')
			s[k] = '1';
	}

	return (s);
}
