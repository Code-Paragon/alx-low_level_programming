#include <stdlib.h>
#include <string.h>
/**
 * calloc - function that allocates memory for an array, using malloc
 * @nmemb: int
 * @size: int
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *prt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	prt = malloc(nmemb * size);
	if (prt == NULL)
		return (NULL);
	prt = memset(prt, 0, (nmemb * size));
	return (prt);
}
