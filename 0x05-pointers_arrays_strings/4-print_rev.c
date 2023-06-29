#include "main.h"
/**
 * print_rev - function prints a string in reverse
 * @s: string printed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0, m = 0, k;

	while (s[i] != '\0')
	{
		m++;
		i++;
	}
		for (k = (m - 1); k >= 0; k--)
		{
			_putchar(s[k]);
		}
	_putchar('\n');
}
