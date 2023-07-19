#include <stddef.h>
/**
 * array_iterator - func executes func given as a param on each element of arr
 * @array: arr
 * @size: size_t
 * @action: ptr
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (!array || !size || !action)
		return;
	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
