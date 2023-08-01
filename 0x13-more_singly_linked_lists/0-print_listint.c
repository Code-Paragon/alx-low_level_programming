#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: list ptr
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t m = 0;

	if (!h || h == NULL)
		return (0);
	while (h)
	{
		printf("%u\n", h->n);
		m += 1;
		h = h->next;
	}
	return (m);
}
