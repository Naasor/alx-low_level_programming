#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to print
 * Return: string
 */

void print_rev(char *s)
{
	int n;
	int y = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		y++;
	}
	for (n = y - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
