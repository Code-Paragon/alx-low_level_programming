#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: int
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int count;
	int SF = 0;

	if (n == 0)
		_putchar('0');
	for (count = 1UL << 63; count > 0; count >>= 1)
	{
		if (n & count)
		{
			_putchar('1');
			SF = 1;
		}
		else if (SF)
			_putchar('0');

	}
}
