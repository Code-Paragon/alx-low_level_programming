#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index index of a listint_t list
 * @index: int
 * @head: head
 *
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempPtr, *currentPtr = NULL;
	unsigned int i;

	if (!*head)
		return (-1);
	tempPtr = *head;
	if (index == 0)
	{
		*head = tempPtr->next;
		free(tempPtr);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if ((!tempPtr) || !(tempPtr->next))
			return (-1);
		tempPtr = tempPtr->next;
	}
	currentPtr = tempPtr->next;
	tempPtr->next = currentPtr->next;
	free(currentPtr);
	return (1);
}
