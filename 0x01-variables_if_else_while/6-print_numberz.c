#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		putchar(q + '0');
	}
	putchar('\n');

	return (0);
}
