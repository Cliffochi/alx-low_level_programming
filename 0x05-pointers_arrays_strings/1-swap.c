#include "main.h"

/**
 * swap_int - swaps the integers
 * @a: integer pointer type
 * @b: integer pointer type 2
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
