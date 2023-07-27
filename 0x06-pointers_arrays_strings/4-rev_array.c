#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 * Return: reverse of the array
 */

void reverse_array(int *a, int n)
{
	int rev;
	int index;

	for (index = n - 1; index >= n / 2; index--)
	{
		rev = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = rev;
	}
}
