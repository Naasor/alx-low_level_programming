#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets in lowerecases
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
