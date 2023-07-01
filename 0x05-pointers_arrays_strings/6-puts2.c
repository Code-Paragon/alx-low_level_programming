#include "main.h"
/**
 * puts2 - function prints char of a str + new line
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, l;

	while (str[i] != '\0')
	{
		i++;
	}
	for (l = 0; l <= (i - 1); l++)
	{
		_putchar(str[l]);
		l = l + 2;
	}
	_putchar('\n');
}
