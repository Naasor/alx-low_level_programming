#include <main.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0 otherwise
 * (if there is one or more chars in the string b that is not 0 or 1 b is NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int val = 0;

	if (!b)
		return (0);
	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		val = 2 * val + (b[x] - '0');
	}
	return (val);
}
