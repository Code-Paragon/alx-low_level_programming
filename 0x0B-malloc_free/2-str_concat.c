#include <stdio.h>
#include <stdlib.h>
/** str_concat -  function that concatenates two strings.
 * @s1: str
 * @s2: str
 *
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0, m, p, r, w;
	char *a;

	while (s1[i] != '\0')
	{
		j++;
		i++;
	}
	while (s2[k] != '\0')
	{
		l++;
		k++;
	}
	a = (char *)malloc(sizeof(char) * (j + l));
	if (a == NULL)
	{
		return (NULL);
	}
	if (j == 0)
	{
		for (r = 0; r < l; r++)
		{
			a[r] = s2[r];
		}
	}
	else if (l == 0)
	{
		for (w = 0; w < j; w++)
		{
			a[w] = s1[w];
		}
	}
	else if ((j == 0) && (l == 0))
	{
		return (NULL);
	}
	else
	{
	for (m = 0; m < j; m++)
	{
		a[m] = s1[m];
	}
	for (p = 0; p < l; p++)
	{
		a[(j + p + 1)] = s2[p];
	}
	a[(j + l + 1)] = '\0';
	}
	return (a);
}
