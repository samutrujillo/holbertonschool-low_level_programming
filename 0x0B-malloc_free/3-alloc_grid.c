#include "holberton.h"
#include <stdlib.h>
/**
 * **alloc_grid - Print the minimum coins to make change
 * @width: Size of input array
 * @height: Pointer to input array
 * Return: Always arr.
 */
int **alloc_grid(int width, int height)
{
	int col, row, l;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (col = 0; col < height; col++)
	{
		grid[col] = malloc(sizeof(int) * width);
		if (!grid[col])
		{
			for (l = 0; l < col; l++)
				free(grid[l]);
			free(grid);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
	{
		for (col = 0; col < width; col++)
			grid[row][col] = 0;
	}
	return (grid);
}
