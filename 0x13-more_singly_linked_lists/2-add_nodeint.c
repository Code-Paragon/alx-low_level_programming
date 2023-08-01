#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list
 * @head: list head ptr
 * @ni: number to be contained in node
 *
 * Return: new node address
 */
listint_t *add_nodeint(listint_t **head, const int ni)
{
	listint_t *ptr;
	listint_t *current;

	if (!head)
		return (NULL);
	ptr = *head;
	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);
	current->n = ni;
	current->next = ptr;
	*head = current;

	return (*head);
}
