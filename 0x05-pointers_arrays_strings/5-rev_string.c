#include "main.h"

/**
 * rev_string - reverses string
 * @s: char array string type
 */

void rev_string(char *s)
{
	int k, b, c;
	char g;

	for (k = 0; s[k] != '\0'; k++)
		;

	c = k;
	for (k--, b = 0; b < c / 2; k--, b++)
	{
		g = s[b];
		s[b] = s[k];
		s[k] = g;
	}
}
