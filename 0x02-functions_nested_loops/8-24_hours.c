#include "main.h"
/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int z = 0;
	int v = 0, w = 0, x = 0, y = 0;

	while (z < 1440)
	{
		_putchar(v + '0');
		_putchar(w + '0');
		_putchar(':');
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar('\n');

		y++;
		if (y > 9)
		{
			y = 0;
			x++;
		}
		if (x > 5)
		{
			x = 0;
			w++;
		}
		if (w > 9)
		{
			w = 0;
			v++;
		}
		z++;
	}
}
