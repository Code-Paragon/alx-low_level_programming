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

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
				printf("%d", a[i]);
			else if (i == (n - 1))
				printf(", %d\n", a[i]);
			else
				printf(", %d", a[i]);
		}
	}
	else
		printf("\n");
}
