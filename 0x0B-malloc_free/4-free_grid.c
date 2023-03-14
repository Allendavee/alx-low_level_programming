#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2 dimensional array
 * @grid: Point to pointer integer
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
