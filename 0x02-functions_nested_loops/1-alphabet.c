#include "main.h"
/**
 * print_alphabet - this prints all the alphabets in lower case
 *
 * Return: void does not return anything
 */
void print_alphabet(void)
{
	const char *str = "abcdefghiklmnopqrstuvwxyz";
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

