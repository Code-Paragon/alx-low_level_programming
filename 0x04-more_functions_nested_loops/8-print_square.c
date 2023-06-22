#include "main.h"
/**
 * print_square - the function that prints a square, followed by a new line.
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, l;

		for (i = 1; i <= size; i++)
		{
			for (l = 1; l <= size ; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
