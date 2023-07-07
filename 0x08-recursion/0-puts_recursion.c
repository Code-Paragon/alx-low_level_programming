#include "main.h"
/**
 * _puts_recursion - function prints str,and new line
 * @s: str
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	_putchar(s[i]);
	++i;
	_puts_recursion(s);
}
