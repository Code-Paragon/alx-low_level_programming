#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - function frees 2 dimensional arr  previously created
 * @grid: int
 * @height: int
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
