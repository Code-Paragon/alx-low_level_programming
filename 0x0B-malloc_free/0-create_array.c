#include <stdlib.h>
/**
 * create_array - function creates char array
 * @size: array size
 * @c: chars
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *array =(char *)malloc(size * sizeof(char));
	int i;

	if (array != NULL)
	{
	for (i = 0; i < size; i++)
	{
		array[i] = 'c';
	}
	}
	return (array);
}
