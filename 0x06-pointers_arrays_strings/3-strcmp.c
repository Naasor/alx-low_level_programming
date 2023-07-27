#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: string to be compared
 * @s2: string to be compared
 * Return: if s1<s2 returns negative difference
 *	if s1 = s2 returns 0
 *	if s1 > s2 returns positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	return (*s1 - *s2);
}
