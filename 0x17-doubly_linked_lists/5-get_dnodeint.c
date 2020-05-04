#include "lists.h"

/**
 * get_dnodeint_at_index - function to return node
 *
 * @head: Head node
 * @index: node index
 * Return: return node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
