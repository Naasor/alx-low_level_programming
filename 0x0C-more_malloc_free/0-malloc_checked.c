#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: integer to check
 * Return: pointer else void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
