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
	unsigned int i;
	char *array;
	array = (char *)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (array != NULL)
	{
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	}

	return (array);
}
