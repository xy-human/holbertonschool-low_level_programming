#include "holberton.h"

/**
 * alloc_grid - created new array using malloc()
 * @width: columns of array 2d
 * @height: rows of array 2d
 * Return: int** with new array 2d
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **pointToPointArray2d = malloc(sizeof(int *) * height + 1);

	if (pointToPointArray2d == NULL)
		return (NULL);
	if (width < 1 || height < 1)
		return (NULL);
	for (i = 0; i < height; i++)
		pointToPointArray2d[i] = malloc(sizeof(int) * width + 1);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			pointToPointArray2d[i][j] = 0;

	return (pointToPointArray2d);
}
