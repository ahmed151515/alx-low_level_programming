#include "main.h"
/**
 * free_grid - free_grid
 * @grid: array
 * @height: int
 */
void free_grid(int **grid, int height)
{
	while (height--)
	{
		free(grid[height]);
	}
	free(grid);
}
