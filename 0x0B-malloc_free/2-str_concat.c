#include <stdlib.h>
/**
 * str_concat -  function that concatenates two strings.
 * @s1: str
 * @s2: str
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, k = 0, l = 0, j, y = 0, p;
	char *a;

	while (s1[i] != '\0')
	{
		k++;
		i++;
	}
	while (s2[y] != '\0')
	{
		l++;
		y++;
	}
	a = (char *)malloc((k + l + 2) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < k; j++)
	{
		a[j] = s1[j];
	}
	a[k] = ' ';
	for (p = 0; p < l; p++)
	{
		a[(k + p + 1)] = s2[p];
	}
	a[k + l + 1] = '\0';
	return (a);
}
