#include "lists.h"
/**
 * reverse_listint - reverse list head.
 *
 * @head: head of list.
 * Return: value to sum.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *new_head = NULL;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		current = (*head)->next;
		(*head)->next = new_head;

		new_head = *head;
		*head = current;
	}

	*head = new_head;
	return (*head);
}
