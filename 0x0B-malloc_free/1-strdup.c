#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - function that returns a pointer to a duplicate
 * @str: string to be copied
 * Return: pointer to the duplicated string and
 *	NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
