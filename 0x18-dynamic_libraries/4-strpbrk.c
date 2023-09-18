#include <stdlib.h>
/**
 * _strpbrk - function searches a str for any of a set of bytes
 * @s: str
 * @accept: str
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, k = 0;
	char *e;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				e = &s[i];
				break;
			}
		}
		if (k != 0)
		{
			break;
		}
	}
	if (k != 0)
	{
		return (e);
	}
	else
	{
		return (NULL);
	}
}
