#include "main.h"
/**
 * more_numbers - the function that prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, l;

	for (i = 0; i < 10; i++)
	{
		for (i = 48; i <= 62; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
