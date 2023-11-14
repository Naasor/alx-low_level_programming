#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: A pointer to the memory area that needs to be filled
 * @b: The value to set each byte to (in the form of an integer)
 * @n: The number of bytes to be set in the memory area
 * Return:  pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
