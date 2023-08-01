#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head ptr
 * @index: int
 *
 * Return: ptr
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nodeptr = head;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next)
			nodeptr = nodeptr->next;
		else
			return (NULL);
	}
	return (nodeptr);
}
