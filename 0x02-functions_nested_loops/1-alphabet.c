#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Function that print alphabets(lowercase) followed by a new line
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
