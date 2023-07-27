#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - prints list lenght
 * @h: list ptr
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes += 1;
		h = h->next;
	}
	return (nodes);
}
