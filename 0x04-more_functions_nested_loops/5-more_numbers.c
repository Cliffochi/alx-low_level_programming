#include "main.h"

/**
 * more_numbers - prints numbers between 0 to 14
 * 10 times.
 * Return: no return.
 */
void more_numbers(void)
{
	int j, k;

	for (j = 0; j < 10; j++)
	{
		for (k = 0; k < 15; k++)
		{
			if (k >= 10)
				_putchar((k / 10) + 48);
			_putchar((k % 10) + 48);
		}
		_putchar('\n');
	}
}
