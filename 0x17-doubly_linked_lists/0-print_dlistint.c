#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head of list
 *
 * Return: num of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;
	const dlistint_t *currentptr = h;

	if (currentptr == NULL)
		return (0);
	while (currentptr != NULL)
	{
		printf("%d \n", currentptr->n);
		currentptr = currentptr->next;
		num++;
	}
	return (num);
}
