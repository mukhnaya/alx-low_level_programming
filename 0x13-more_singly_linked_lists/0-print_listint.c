#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - to return elements of list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int pau;

	pau = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		pau++;
	}
	return (pau);
}
