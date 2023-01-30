#include "lists.h"
/**
 * add_node_end - adds new node after last node
 * @head: first node
 * @str: input
 * Return: new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *mos;
	list_t *pau;
	size_t nodes;

	nodes = 0;
	while (str[nodes] != '\0')
	{
		nodes++;
	}
	pau = malloc(sizeof(list_t));
	if (pau == NULL)
	{
		return (NULL);
	}
	pau->str  = strdup(str);
	pau->len  = nodes;
	if (*head == NULL)
	{
		*head = pau;
		pau->next = NULL;
		return (*head);
	}
	mos = *head;
	while (mos->next != NULL)
	{
		mos = mos->next;
	}
	mos->next = pau;
	pau->next = NULL;
	return (*head);
}
