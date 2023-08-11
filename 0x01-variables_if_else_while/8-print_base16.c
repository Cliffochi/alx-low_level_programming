#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * You can only use `putchar`, and only 3 times.
 * Return: 0
 */
int main(void)
{
	char q;
	int w;

	for (w = 0; w < 10; w++)
	{
		putchar(w + '0');
	}
	for (q = 'a'; q < 'g'; q++)
	{
		putchar(q);
	}
	putchar('\n');

	return (0);
}
