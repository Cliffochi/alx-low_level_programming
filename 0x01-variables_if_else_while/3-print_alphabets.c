#include <stdio.h>
/**
 * main - main block
 * Uses `putchar` to print lowercase and then uppercase alphabet.
 * Return: 0
 */
int main(void)
{
	char q = 'a';

	while (q <= 'z')
	{
		putchar(q);
		q++;
	}

	q = 'A';

	while (q <= 'Z')
	{
		putchar(q);
		q++;
	}

	putchar('\n');

	return (0);
}
