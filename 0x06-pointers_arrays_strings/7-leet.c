#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: inputs string
 * Return: pointer to dest
 */

char *leet(char *s)
{
	int count = 0, i;
	int capsletters[] = {97, 101, 111, 116, 108};
	int smalletters[] = {65, 69, 79, 84, 76};
	int numbers[] = {52, 51, 48, 55, 49};

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == smalletters[i] || *(s + count) == capsletters[i])
			{
				*(s + count) = numbers[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
