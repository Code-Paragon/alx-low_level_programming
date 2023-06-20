#include "main.h"
/**
 * print_alphabet - this prints all the alphabets in lower case 10 times
 *
 * Return: void does not return anything
 */
void print_alphabet_x10(void)
{
        const char *str = "abcdefghijklmnopqrstuvwxyz";
        int i;

	for (m = 0; m < 10; m++)
	{
        for (i = 0; str[i] != '\0'; i++)
	{
                _putchar(str[i]);
	}
        _putchar('\n');
}
}
