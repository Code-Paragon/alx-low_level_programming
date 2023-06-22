#include "main.h"
/**
 * print_triangle - the function prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * @l: is a loop parameter
 * @k: is a loop parameter
 * @m: is a loop parameter
 * @i: is a is a loop parameter
 * @p: is a loop parameter
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int l, k, m = size, i, p = 1;

		for (i = 1; i <= size; i++)
		{
			for (l = 1; l < m; l++)
			{
				_putchar(32);
			}
			for (k = 1; k <= p; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
			m--;
			p++;
		}
	}
}
