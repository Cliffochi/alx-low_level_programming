#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: char array sting type
 */

void _puts(char *str)
{
	int w;

	for (w = 0; str[w] != '\0'; w++)
	{
		_putchar(str[w]);
	}
	_putchar('\n');
}
