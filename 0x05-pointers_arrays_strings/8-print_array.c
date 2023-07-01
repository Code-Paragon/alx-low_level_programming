#include <stdio.h>
/**
 * print_array - function prints n elements of an array of ints,and new line
 * @a: an int
 * @n: an int
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
