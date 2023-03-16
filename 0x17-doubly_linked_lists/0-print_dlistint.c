#include "list.h"
/**
 * print_dlistint - print elements of a doubly linked list
 * @h: is the pointer to the node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	nodes_n;
	dlistint_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		print("%d", h->n);
		ptr->next;
		nodes_n++;
	}
	return (nodes_n);
}
