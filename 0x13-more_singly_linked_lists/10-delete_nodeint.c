#include "lists.h"
/**
 * delete_nodeint_at_index - delete node into head.
 *
 * @head: head of list.
 * @index: index for delete.
 * Return: value to sum.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux_head, *new_head;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	aux_head = *head;
	if (index == 0)
	{
		aux_head = aux_head->next;
		free(*head);
		*head = aux_head;

		return (1);
	}

	while (i < index)
	{
		if (aux_head == NULL)
			return (-1);
		aux_head = aux_head->next;
		i++;
	}
	new_head = aux_head->next;
	aux_head->next = new_head->next;
	free(new_head);
	return (1);
}
