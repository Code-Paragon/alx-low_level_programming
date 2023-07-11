#include <stdlib.h>
/**
 * _strdup - returns ptr to a alloc space,contains copy of str given as param
 * @str - string copied
 *
 * Return: ptr
 */
char *_strdup(char *str)
{
	int i = 0, k = 0, l;

	while (str[i] != '\0')
	{
		k++;
		i++;
	}
	char *a = (char *)malloc(k*sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < k; l++)
	{
		a[l] = str[l];
	}
	return (a);
}
