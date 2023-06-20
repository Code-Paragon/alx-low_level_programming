#include "main.h"
/**
 * _islower - the function checks for lowercase character.
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	const char *str = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
		{
			return (1);
			break;
		}
		else
			return (0);
	}
}
