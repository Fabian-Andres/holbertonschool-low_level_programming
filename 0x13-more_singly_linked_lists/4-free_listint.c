#include "lists.h"
/**
 * free_listint - free memory of list.
 *
 * @head: head of list.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
