#include <stdio.h>
/**
 * main - main code block
 * using putchar to display alphatet
 * Return: 0 ==> success
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
