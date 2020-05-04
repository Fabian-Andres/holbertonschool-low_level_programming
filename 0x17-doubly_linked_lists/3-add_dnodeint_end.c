#include "lists.h"

/**
 * add_dnodeint - function to add node
 *
 * @head: head doubly linked list
 * @n: new value node
 * Return: new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newHead, *auxHead = *head;

	if (head == NULL)
		return (NULL);

	newHead = malloc(sizeof(dlistint_t));
	if (newHead == NULL)
		return (NULL);

	newHead->n = n;
	newHead->next = NULL;
	if (*head != NULL)
	{
		while (auxHead->next != NULL)
		{
			auxHead = auxHead->next;
		}
		newHead->prev = auxHead;
		auxHead->next = newHead;
	}
	else
	{
		newHead->prev = NULL;
		*head = newHead;
	}

	return (newHead);
}
