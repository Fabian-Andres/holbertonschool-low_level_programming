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
	listint_t *aux_head;
	unsigned int i = 0;

	aux_head = *head;
	if (aux_head == NULL)
		return (-1);

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
	if (index > 1)
		return (-1);
	if (index == 1)
	{
		free(aux_head->next);
		aux_head->next = aux_head->next->next;
	}
	else
	{
		free(*head);
		*head = (*head)->next;
	}
	return (1);
}
