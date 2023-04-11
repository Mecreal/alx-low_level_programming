#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- free the allocation memory for gride.
 * @height: The hight of the matrix.
 * @grid: The pointer to be freed;
 */

void free_grid(int **grid, int height)
{
	int y = 0;

	while (y < height)
	{
		free(grid[y]);
		y++;
	}
}
