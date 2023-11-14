#include "main.h"

/**
 * char *_strcat - function that concatenates two strings
 * @dest: string to be concatenated
 * @src: string to be appended to dest
 * Return: A pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0; /*dlen represnts the length of &dest*/
	int s; /*s represent the index of &src*/

	while (dest[dlen])
		dlen++;
	for (s = 0; src[s] != 0; s++)
	{
		dest[dlen] = src[s];
		dlen++;
	}
	dest[dlen++] = '\0';

	return (dest);
}
