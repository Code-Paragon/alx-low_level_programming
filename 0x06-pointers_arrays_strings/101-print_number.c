#include "main.h"
/**
 * print_number - function that prints an integer.
 * @n: int
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int k1;

	if (k1 < 0)
	{
		k1 = -n;
		_putchar('-');
	}
	else 
	{
		k1 = n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
