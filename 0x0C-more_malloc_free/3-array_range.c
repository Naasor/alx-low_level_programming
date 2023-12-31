#include "main.h"

/**
 * array_range - Write a function that creates an array of integers.
 *
 * @min: The first value of the array.
 * @max: The last value of the array.
 *
 * Return: If min > max or the function fails - NULL.
 *         Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	array = malloc(sizeof(int) * n);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		array[i] = min++;

	return (array);
}
