#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - get length of the list
 * @h: is the head pointer
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int mos;

	while (h != NULL)
	{
		mos++;
		h = h->next;
	}
	return (mos);
}
