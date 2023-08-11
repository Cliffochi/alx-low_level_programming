#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q = 0;

	while (q < 10)
	{
		putchar(q + '0');
		if (q < 9)
		{
			putchar(44);
			putchar(32);
		}
		q++;
	}
	putchar('\n');

	return (0);
}
