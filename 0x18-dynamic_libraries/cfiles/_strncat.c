#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @dest: A string that @src will be appended to
 * @src: A string that will be appended to @dest
 * @n: the number of byte at src to be appended to dest
 * Return: a pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int s = 0;

	while (dest[s++])
		dlen++;
	for (s = 0; src[s] && s < n; s++)
		dest[dlen++] = src[s];

	return (dest);
}
