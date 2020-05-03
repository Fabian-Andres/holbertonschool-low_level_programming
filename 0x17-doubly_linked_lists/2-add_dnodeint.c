#include "lists.h"

/**
 * add_dnodeint - function to add node
 *
 * @head: head doubly linked list
 * @n: new value node
 * Return: new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newHead;

	newHead = malloc(sizeof(dlistint_t));
	if (newHead == NULL)
		return (NULL);

	if (head == NULL)
	{
		head->prev = NULL;
		*head = newHead;
	}


	newHead->n = n;
	newHead->next = *head;
	newHead->prev = NULL;
	*head = newHead;

	return (*head);
}
