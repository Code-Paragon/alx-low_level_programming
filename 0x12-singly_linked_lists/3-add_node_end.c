#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds node to the end of the list
 * @head: head ptr
 * @str: string
 *
 * Return: ptr
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *lastNode;
	unsigned int j;

	if (!(head && str))
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	for (j = 0; str[j]; j++)
	{}
	newNode->str = strdup(str);
	newNode->len = j;
	newNode->next = NULL;
	if (!*head)
	{
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next)
	{
		lastNode = lastNode->next;
	}
	lastNode->next = newNode;
	return (newNode);
}
