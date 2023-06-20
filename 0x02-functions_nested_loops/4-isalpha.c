#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: the alphabet to be checked
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	const char *str = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
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
	}
	return (m);
}
