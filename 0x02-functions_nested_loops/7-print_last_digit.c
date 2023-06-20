#include "main.h"
/**
 * print_last_digit -  the function that prints the last digit of a number.
 * @n: the numer to be evluated
 *
 * Return: int an integer
 */
int print_last_digit(int n)
{
	int n = n % 10;
	
	if (n < 0)
		return (-n);
	else
		return (n);
}
