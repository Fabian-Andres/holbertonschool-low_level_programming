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

	if (head == NULL)
		return;

	while (current != NULL)
	{
		current = current->next;
		free(*head);
		*head = current;
	}
}
