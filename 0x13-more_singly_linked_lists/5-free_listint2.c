#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: list header ptr
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
		return;
	while (*head)
	{
		ptr = *head;
		*head = ptr->next;
		free(ptr);
	}
	*head = NULL;
}
