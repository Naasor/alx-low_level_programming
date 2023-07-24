#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: integer pointer 1
 * @b: integer pointer 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int e = *a;
	int f = *b;
	*a = f;
	*b = e;
}
