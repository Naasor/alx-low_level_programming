#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: _ if successfull and "" if unsuccessful
 */

void print_line(int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
