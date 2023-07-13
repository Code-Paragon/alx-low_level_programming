#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: int
 * @max: int
 *
 * Return: int
 */
int *array_range(int min, int max)
{
	int *yup;
	int i, num = (max - min) + 1;
	
	if (min > max)
		return (NULL);
	yup = (int *)malloc(num * sizeof(int));
	if (yup == NULL)
		return (NULL);

	for (i = 0; i < num; i++)
	{
		yup[i] = min + i;
	}
	return (yup);
}
