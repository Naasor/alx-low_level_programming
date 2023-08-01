#include "main.h"
#include <stdio.h>

/**
 * _strstr - Function that locates a substring
 * @haystack: A pointer to the string in which we want to search
 * @needle: A pointer to the substring that we are searching for
 * Return: Pointer to haystack or NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
