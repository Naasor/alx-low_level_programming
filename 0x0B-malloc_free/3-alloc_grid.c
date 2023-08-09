#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -function that returns pointer to a
 *	2-dimensional array of integers
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If function fails - NULL or
 *         Otherwise - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		grid[hgt_index] = malloc(sizeof(int) * width);

		if (grid[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(grid[hgt_index]);

			free(grid);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			grid[hgt_index][wid_index] = 0;
	}

	return (grid);
}
