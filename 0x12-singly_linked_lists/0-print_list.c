#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints list members
 * @h: list header ptr
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t NumberofNodes = 0;
	if (!h)
		return(0);
	while(h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%u] %s\n", h->len, h->str);
		NumberofNodes += 1;
		h = h->next;
	}
	return(NumberofNodes);
}
