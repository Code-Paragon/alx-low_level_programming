#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list
 * @head: list head ptr
 * @n: number to be contained in node
 *
 * Return: new node address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *current;

	ptr = *head;
	if (ptr == NULL || !head)
		return (NULL);
	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = ptr;
	*head = current;

	return (current);
}
