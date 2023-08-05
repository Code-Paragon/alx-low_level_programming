#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: ptr
 * @index: int
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
		return (-1);
	if (*n & 1UL << index)
		*n ^= 1UL << index;
	return (1);
}
