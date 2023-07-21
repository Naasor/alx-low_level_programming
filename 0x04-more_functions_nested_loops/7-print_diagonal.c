#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: \ if true or \n otherwise
 */

void print_diagonal(int n)
{
	int x;
	int w;

	if (n <= 48)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 48; x < n; x++)
		{
			for (w = 48; w < n; w++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
