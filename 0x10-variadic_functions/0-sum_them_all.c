#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: number of parameter to pass to the function
 * @...: variable number of parameter to calculate the sum
 * Return: 0 if n == 0, otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, result = 0;

	if (n == 0)
		return (0);

	va_start(all, n);

	for (i = 0; i < n; i++)
		result += va_arg(all, int);

	va_end(all);

	return (result);
}
