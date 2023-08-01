#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: ptr
 * @idx: int
 * @ni: int
 *
 * Return: ptr
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int ni)
{
	listint_t *newptr, *currentptr;
	unsigned int i;

	if (!*head)
		return (NULL);
	newptr = malloc(sizeof(listint_t));
	if (!newptr)
		return (NULL);
	newptr->n = ni;
	currentptr = *head;
	if (idx == 0)
	{
		newptr->next = currentptr;
		*head = newptr;
		return (*head);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		if (currentptr)
		{
			currentptr = currentptr->next;
		}
		else
			return (NULL);
	}
	newptr->next = currentptr->next;
	currentptr->next = newptr;
	return (newptr);
}
