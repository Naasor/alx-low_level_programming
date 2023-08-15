#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Finds the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}

	puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}

	puppy->name = _strcopy(puppy->name, name);
	puppy->age = age;
	puppy->owner = _strcopy(puppy->owner, owner);

	return (puppy);
}
