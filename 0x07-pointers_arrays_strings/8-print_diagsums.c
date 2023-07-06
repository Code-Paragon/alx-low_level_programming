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
	int i, j, sums = 0, sumd = 0;

	for (i = 0, j = (size - 1); i < size, j >= 0; i++, j--)
	{
		sums = sums + a[i][i];
		sumd = sumd + a[j][i];
	}
	printf("%d, %d", sums,sumd);
}
