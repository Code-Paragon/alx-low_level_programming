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
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(size - 1 - i) * size + i];
	}
	printf("%d, %d\n", sum1, sum2);
}
