#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t
 * @head: pointer to head of list
 * @ni: data to be stored
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int ni)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if ((*head) == NULL)
	{
		new->n = ni;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (*head);
	}
	new->n = ni;
	(*head)->prev = new;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (*head);
}
