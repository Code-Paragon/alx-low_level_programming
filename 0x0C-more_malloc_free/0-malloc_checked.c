#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: int
 * 
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *op;

	op = malloc(b);
	if (op == NULL)
		exit (98);

	return (op);
}
