#include "lists.h"
/**
 * insert_nodeint_at_index - sum the value n into head.
 *
 * @head: head of list.
 * @idx: index to add new node.
 * @n: Value od new node.
 * Return: value to sum.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *aux_head;
	unsigned int i = 1;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
	{
		*head = new_node;
	}

	aux_head = *head;

	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = aux_head;

		*head = new_node;
		return (new_node);
	}

	while (i < idx)
	{
		if (aux_head == NULL)
			return (NULL);
		aux_head = aux_head->next;
		i++;
	}

	new_node->n = n;
	new_node->next = aux_head->next;

	aux_head->next = new_node;

	return (aux_head);
}
