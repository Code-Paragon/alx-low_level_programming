#include "main.h"
/**
 * puts2 - function prints char of a str + new line
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0, l = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (str[l] != str[(i - 1)])
	{
		_putchar(str[l]);
		l = l + 2;
	}
	_putchar('\n');
}
