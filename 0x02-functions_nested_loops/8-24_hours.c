#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day
 *
 * Return: 0 (Success)
 */

void jack_bauer(void)
{
	int m, n, o, p;

	for (m = 0; m <= 2; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			for (o = 0; o <= 5; o++)
			{
				for (p = 0; p <= 9; p++)
				{
					if (m >= 2 && n >= 4)
						break;
					_putchar(m + 48);
					_putchar(n + 48);
					_putchar(58);
					_putchar(o + 48);
					_putchar(p + 48);
					_putchar('\n');
				}
			}
		}
	}
}
