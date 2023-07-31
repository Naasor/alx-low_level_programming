#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 * @s: pointer to the string in which we want to search for any character
 * @accept: A pointer to the set of characters that we are searching for
 * Return: if there is a  match returns s and Null otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}
	return (NULL);
}
