#include "lists.h"
/**
 * free_listint2 - free memory of list.
 *
 * @head: head of list.
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;

	while (current != NULL)
	{
		current = (current)->next;
		free(current);
	}
	*head = current;
	free(*head);
}
