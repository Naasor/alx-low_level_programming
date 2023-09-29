#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 *      to flip to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return:  number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int b = 0;

	while (x > 0)
	{
		b += (xor & 1);
		x >>= 1;
	}

	return (bit);
}
