#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: input is an integer
 * Return: last digit
 */

int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
