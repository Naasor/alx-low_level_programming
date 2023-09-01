#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int x, index = 0;
	unsigned long int bi;

	for (x = 63; x >= 0; x--)
	{
		bi = n >> x;

		if (bi & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index != NULL)
			_putchar('0');
	}
	if (index == NULL)
		_putchar('0');
}
