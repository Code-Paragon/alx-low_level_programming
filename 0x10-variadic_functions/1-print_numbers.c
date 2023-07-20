#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: char
 * @n: int
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list jp;

	if (separator == NULL)
		return;
	va_start(jp, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(jp, int));
	if (i < n - 1 && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(jp);
}
