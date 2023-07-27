#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>
/**
 * add_node - adds a new node
 * @str: string
 * @head: header ptr
 *
 * Return: new node ptr
 */
list_t *add_node(list_t **head, const char *str)
{
	int m;
	list_t *new;

	if (!(head && str))
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m]; m++)
	{}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = m;
	new->next = *head;
	*head = new;
	return (new);
}
