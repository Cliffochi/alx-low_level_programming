#include <stdio.h>
/**
 * main - main block
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0
 */
int main(void)
{
	char q;

	for (q = 'z'; q >= 'a'; q--)
	{
		putchar(q);
	}
	putchar('\n');

	return (0);
}
