#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int x;
	int index = 0;
	unsigned long int b;

	for (x = 63; x >= 0; x--)
	{
		b = n >> x;

		if (b & '1')
		{
			_putchar('1');
			index++;
		}
		else if (!index)
			_putchar('0');
	}
	if (index)
		_putchar('0');
}
