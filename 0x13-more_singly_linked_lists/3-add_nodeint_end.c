#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - function adds a new node at the end of a listint_t list
 * @head: list head ptr
 * @ni: int to be contained in node
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int ni)
{
	listint_t *newnode;
	listint_t *currentnode;

	if (!head)
		return (NULL);
	currentnode = *head;
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
	{
		free(newnode);
		return (newnode);
	}
	newnode->n = ni;
	newnode->next = NULL;
	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	while (currentnode->next)
	{
		currentnode = currentnode->next;
	}
	currentnode->next = newnode;

	return (newnode);
}
