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
	int i;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	a = (int **)calloc(width, sizeof(int *));
	if (a ==  NULL)
		return (NULL);
	for (i = 0 ; i < width; i++)
	{
		a[i] = (int *)calloc(height, sizeof(int));
	}
	return (a);
}
