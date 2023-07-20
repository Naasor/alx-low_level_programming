#include "main.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9
 * Description: Does not print 2 and 4
 * Return: numbers from 0 to 9 excluding 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar('\n');
}
