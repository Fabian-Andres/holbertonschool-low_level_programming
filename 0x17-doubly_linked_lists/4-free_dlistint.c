#include "lists.h"

/**
 * free_dlistint - function free list
 *
 * @head: to free
 * Return: new node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *auxHead;

	while (head != NULL)
	{
		auxHead = head;
		head = head->next;
		free(auxHead);
	}
}
