#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to list head
 * @ni: data to be stored
 *
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int ni)
{
	dlistint_t *new, *back;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = ni;
		*head = new;
		return (*head);
	}
	back = *head;
	while (back->next != NULL)
	{
		back = back->next;
	}
	new->n = ni;
	new->prev = back;
	back->next = new;
	new->next = NULL;
	return (*head);
}
