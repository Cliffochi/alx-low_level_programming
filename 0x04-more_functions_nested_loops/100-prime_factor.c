#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0.
 */

int main(void)
{
	long int a, k;

	a = 612852475143;
	for (k = 2; k <= a; k++)
	{
		if (a % k == 0)
		{
			a /= k;
			k--;
		}
	}
	printf("%ld\n", k);
	return (0);
}
