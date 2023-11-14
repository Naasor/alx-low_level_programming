#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: A pointer to the string whose initial segment we want to calculate
 * @accept: A pointer to the set of characters to be considered
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
