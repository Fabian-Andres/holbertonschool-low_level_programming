#include "lists.h"
/**
 * get_nodeint_at_index - Search node of list.
 *
 * @head: head of list.
 * @index: index for search in list
 * Return: node found.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_print;
	unsigned int n = 0;

	if (head == NULL)
		return (0);

	node_print = head;
	while (n < index)
	{
		if (node_print == NULL)
			return (NULL);
		node_print = node_print->next;
		n++;
	}

	return (node_print);
}
