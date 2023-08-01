#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function returns number of elements in a linked listint_t list
 * @h: list ptr
 *
 * Return: number nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t NumberofNodes = 0;

	if (!h || h == NULL)
		return (0);
	while (h)
	{
		NumberofNodes += 1;
		h = h->next;
	}
	return (NumberofNodes);
}
