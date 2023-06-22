#include "main.h"
/***
 * print_diagonal - the function draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int l, m = 0, i;

		for (i = 1; i <= n; i++)
		{
			for (l = 1; l <= m; l++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			m++;
		}
	}
}
