#include "main.h"
/**
 * more_numbers - the function prints 10x the numbers 0-14, a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (l = 48; l <= 62; l++)
			_putchar(l);

		_putchar('\n');
	}
	_putchar('\n');
}
