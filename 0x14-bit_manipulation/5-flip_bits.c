#include "main.h"
/**
 * flip_bits - returns num of bit need to fliped to get from one num to another
 * @n: int
 * @m: int
 *
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int leng = n ^ m;
	int rt = 0;

	while (leng)
	{
		rt += leng & 1;
		leng >>= 1;
	}
	return (rt);
}
