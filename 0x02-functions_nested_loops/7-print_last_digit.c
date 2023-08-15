#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */

int print_last_digit(int n)
{
	int lastd;

	if (n < 0)
	{
		lastd = -1 * (n % 10);
		_putchar(lastd + '0');
		return (lastd);
	}
	else
	{
		lastd = n % 10;
		_putchar(lastd + '0');
		return (lastd);
	}
}
