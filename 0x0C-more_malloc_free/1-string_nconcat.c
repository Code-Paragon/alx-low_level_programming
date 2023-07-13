#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, p;
	unsigned int l = 0, w, q;
	char *op;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	else if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[l] != '\0')
	{
		l++;
	}
	op = (char *)malloc(sizeof(char) * (i + n + 1));
	if (op == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
	{
		op[p] = s1[p];
	}
	if (n >= l)
	{
		for (w = 0; w < l; w++)
		{
			op[i + w] = s2[w];
		}
		op[i + w] = '\0';
	}
	else
	{
		for (q = 0; q < n; q++)
		{
			op[i + q] = s2[q];
		}
		op[i + q] = '\0';
	}
	return (op);
}
