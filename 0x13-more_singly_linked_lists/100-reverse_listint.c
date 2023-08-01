#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: header ptr
 *
 * Return: ptr
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevptr = NULL, *nextptr = NULL;

	while (*head)
	{
		nextptr = (*head)->next;
		(*head)->next = prevptr;
		prevptr = *head;
		*head = nextptr;
	}
	*head = prevptr;
	return (*head);
}
