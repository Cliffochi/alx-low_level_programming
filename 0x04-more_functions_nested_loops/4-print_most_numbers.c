#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		if (b != 50 && b != 52)
			_putchar (b);
	}
	_putchar('\n');
}
