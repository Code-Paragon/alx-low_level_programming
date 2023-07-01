#include "main.h"
/**
 * puts2 - function prints char of a str + new line
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
