#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: int
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list am;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(am, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(am, unsigned int);
	}
	va_end(am);
	return (sum);
}
