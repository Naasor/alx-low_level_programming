#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: A string
 * @src: A string
 * @n: number of byte to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0;
	int s;

	while (src[s++])
		slen++;
	for (s = 0; src[s] && s < n; s++)
		dest[s] = src[s];
	for (s = slen; s < n; s++)
		dest[s] = '\0';

	return (dest);
}
