#include "main.h"

/**
 * print_numbers - prints numbers (0 to 9).
 * Return: returns 0
 */

void print_numbers(void)
{
	int k;

	for  (k = 48; k < 58; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
