#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: int
 * @n: ptr
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	*n |= (1 << index);
	return (1);
}
