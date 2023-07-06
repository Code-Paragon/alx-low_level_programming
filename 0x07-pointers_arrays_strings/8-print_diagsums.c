#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function print sum of two diagonals of squa matrix of int
 * @a: ptr
 * @size: int
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0, j = (size - 1); i < size, j >= 0; i++, j--)
	{
		sum1 = sum1 + a[i][i];
		sum2 = sum2 + a[j][i];
	}
	printf("%d, %d", sum1,sum2);
}
