#include "main.h"
/**
 * print_last_digit -  the function that prints the last digit of a number.
 * @n: the numer to be evluated
 *
 * Return: int an integer
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
