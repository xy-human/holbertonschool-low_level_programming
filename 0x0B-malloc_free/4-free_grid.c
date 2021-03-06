#include "holberton.h"

/**
 * free_grid - created new array using malloc()
 * @grid: array int**
 * @height: rows of array 2d
 * Return: int** with new array 2d
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
