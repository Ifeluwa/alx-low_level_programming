#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees the grid
 *
 * @grid: the grid
 * @height: the height \o/
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
