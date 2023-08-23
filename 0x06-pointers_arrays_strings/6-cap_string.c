#include "main.h"

/**
 * cap_string - capitalises all words
 * @s: string input
 * Return: pointer to dest
 */

char *cap_string(char *s)
{
	int tally = 0, i;
	int words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + tally) >= 97 && *(s + tally) <= 122)
		*(s + tally) = *(s + tally) - 32;
	tally++;
	while (*(s + tally) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + tally) == words[i])
			{
				if ((*(s + (tally + 1)) >= 97) && (*(s + (tally + 1)) <= 122))
					*(s + (tally + 1)) = *(s + (tally + 1)) - 32;
				break;
			}
		}
		tally++;
	}
	return (s);
}
