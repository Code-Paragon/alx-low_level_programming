#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in dlistint_t list
 * @h: pointer to list head
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
