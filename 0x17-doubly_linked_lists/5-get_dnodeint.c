#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * @head: pointer to head
 * @index: node index
 *
 * Return: nth node of a dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (index == n)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
