#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * Description: prints from 0 to 14, followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int tx;
	int i;

	for (tx = 0; tx < 10; tx++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10;)
			}
			_putchar(i % 10);
		}
		_putchar('\n');
	}
}
