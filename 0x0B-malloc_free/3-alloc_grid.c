#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the matrix
 * @height: The hight of the matrix
 * Return:  a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int x = 0, y = 0;

	if (height <= 0 || width <= 0)
		return (NULL);

	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix != NULL)
	{
		while (x < height)
		{
			matrix[x] = (int *)malloc(sizeof(int) * width);
			if (matrix[x] == NULL)
			{
				for (y = 0; y < x; y++)
					free(matrix[y]);
				free(matrix);
				return (NULL);
			}
			while (y < width)
			{
				matrix[x][y] = 0;
				y++;
			}
			x++;
		}
		return (matrix);
	}
	return (NULL);
}
