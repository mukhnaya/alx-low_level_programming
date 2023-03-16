/**
 * print_dlistint - print elements of a doubly linked list
 * @h - is the pointer to the node
 *
 * Return: number of nodes
 */
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 *
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;
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
	return(nodes_n);
}
