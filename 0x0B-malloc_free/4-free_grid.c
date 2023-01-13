#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * free_grid - free a 2D array
 * @grid: 2D array
 * @height: height of array
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int pau;

	for (pau = 0; pau < height; pau++)
	{
		free(grid[pau]);
	}
	free(grid);
}
