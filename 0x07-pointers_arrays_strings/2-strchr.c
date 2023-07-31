#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: Pointer to the string in which we want to search for the character
 * @c: The character we are looking for
 * Return: If a match return pointer to the location of the character
 *	if not a match return NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
/*If the character is not found, return NULL*/
	return (NULL);
}
