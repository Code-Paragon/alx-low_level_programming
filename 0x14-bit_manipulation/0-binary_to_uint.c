#include <math.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: str ptr
 *
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int Unit;

	if (b == NULL)
		return (0);
	for (Unit = 0; *b; b++)
	{
		if (*b == '1')
			Unit = (Unit << 1) | 1;
		else if (*b == '0')
			Unit <<= 1;
		else
			return (0);
	}
	return (Unit);
}
