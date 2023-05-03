#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid
 * @height: height
 * Return: void function
 */

void free_grid(int **grid, int height)
{
	int j1 = 0;

	for (; j1 < height; j1++)
		free(grid[j1]);

	/*free(grid)*/
	free(grid);
}
