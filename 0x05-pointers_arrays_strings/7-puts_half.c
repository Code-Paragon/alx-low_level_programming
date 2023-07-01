#include "main.h"
/**
 * puts_half - function prints half of a str,and new line.
 * @str: striing printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, m;

	while (str[i] != '\0')
	{
		i++;
	}
	if ((i % 2) == 0)
	{
		for (m = i / 2; m <= (i - 1); m++)
		{
			_putchar(str[m]);
		}
		_putchar('\n');
	}
	else
	{
		for (m = (((i - 1) / 2) + 1); m <= (i - 1); m++)
		{
			_putchar(str[m]);
		}
		_putchar('\n');
	}
}
