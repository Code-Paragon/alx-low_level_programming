#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: int
 */
int get_endianness(void)
{
	unsigned int rep = 1;
	char *car = (char *) &rep;

	if (*car)
		return (1);
	else
		return (0);
}
