#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: A pointer to the destination memory area (data will be copied to)
 * @src: A pointer to the source memory area from which data will be copied
 * @n:  The number of bytes to copy from the source to the destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
