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
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
	}
}
