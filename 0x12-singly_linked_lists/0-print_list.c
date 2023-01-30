#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * size_t print_list - to return elements of list
 * @h: head of the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int pau;
	const list_t *mos = NULL;

	pau = 0;
	mos = h;
	while (mos != NULL)
	{
		if (mos->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", mos->len, mos->str);
		}
		mos = mose->next;
		pau++;
	}
	return (pau);
}
