#include "lists.h"
/**
 * free_listint2 - free memory of list.
 *
 * @head: head of list.
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
    if (*head == NULL)
		return;

	while (*head != NULL)
	{
		free(*head);
		*head = (*head)->next;
	}
}
