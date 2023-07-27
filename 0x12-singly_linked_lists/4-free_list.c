#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list_t list.
 * @head: ptr
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *fri;

	while (head)
	{
		fri = head;
		head = head->next;
		free(fri->str);
		free(fri);
	}
}
