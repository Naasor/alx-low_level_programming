#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * Description: prints from 0 to 14, followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int x;
	int i;

	for (x = 0; x < 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
