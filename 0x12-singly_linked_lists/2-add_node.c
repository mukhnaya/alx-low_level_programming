#include "lists.h"
/**
 * add_node - to add node to list
 * @head: head
 * @str: pointer to string
 * Return: elements returned
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mos = NULL;
	unsigned int pau;

	mos = malloc(sizeof(list_t));
	if (mos == NULL)
	{
		return (NULL);
	}
	pau = 0;
	while (str[pau] != '\0')
	{
		pau++;
	}
	mos->len = pau;
	mos->str = strdup(str);
	mos->next = *head;
	*head = mos;
	return (*head);
}
