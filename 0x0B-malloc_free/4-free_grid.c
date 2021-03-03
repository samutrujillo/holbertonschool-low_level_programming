
#include <stdlib.h>
#include "holberton.h"
/**
 * free_grid - Liberates memory fuction
 * @grid: matrix to liberate memory
 * @height: array height
 * Return: Pointer to two dimentional array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
