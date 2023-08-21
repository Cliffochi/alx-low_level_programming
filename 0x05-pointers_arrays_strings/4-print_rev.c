#include "main.h"

/**
 * print_rev - reverses string
 * @s: string type as char
 */

void print_rev(char *s)
{
	int d;

	for (d = 0; s[d] != '\0'; d++)
		;

	for (d--; d >= 0; d--)
		_putchar(s[d]);

	_putchar('\n');
}
