#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * 
 */

void print_diagonal(int n)
{
	int w;
	int x;

	while (n <= 48)
	{
		_putchar('\n');
	}
	else
	{
		for (w = 48; w < n; w++)
		{
			for (x = 48; x < n; x++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
