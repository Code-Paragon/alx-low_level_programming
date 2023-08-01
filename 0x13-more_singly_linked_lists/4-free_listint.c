#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: ptr
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *local;

	if (!head)
		return;
	while (head)
	{
		local = head;
		head = head->next;
		free(local);
	}
}
