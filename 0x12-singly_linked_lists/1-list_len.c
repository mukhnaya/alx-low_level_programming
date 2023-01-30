#include "lists.h"
/**
 * list_len - to return number of nodes
 * @h: is the head of the linked list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
