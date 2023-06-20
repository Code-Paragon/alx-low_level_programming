#include "main.h"
/**
 * _islower - the function checks for lowercase character.
 * @c: this is the alphabet to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	const char *str = "abcdefghijklmnopqrstuvwxyz";
	int i = 0, m;

	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			m = 1;
			break;
		}
		else
			m = 0;
		i++;
	}
	return (m);
}
