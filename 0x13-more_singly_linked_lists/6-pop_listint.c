#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes head node of listint_t list,returns head node data (n)
 * @head: head ptr
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *freeptr;
	int val;

	if (!head)
		return (0);
	freeptr = *head;
	val = freeptr->n;
	*head = freeptr->next;
	free(freeptr);
	return (val);
}
