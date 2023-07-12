#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of int
 * @width: int
 * @height: int
 *
 * Return: int ptr
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, l, p;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	a = (int **)malloc(width * sizeof(int *));
	if (a ==  NULL)
		return (NULL);
	for (i = 0 ; i < width; i++)
	{
		a[i] = (int *)malloc(height * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(a[j]);
			}
			free(a);
			return (NULL);
		}
	}
	for (l = 0; l < width; l++)
	{
		for (p = 0; p < height; p++)
		{
			a[l][p] = 0;
		}
	}
	return (a);
}
