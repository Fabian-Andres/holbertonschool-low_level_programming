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

	if (head == NULL)
		return (NULL);

	newHead = malloc(sizeof(dlistint_t));
	if (newHead == NULL)
		return (NULL);

	newHead->prev = NULL;
	newHead->n = n;
	newHead->next = *head;
	if (*head != NULL)
		(*head)->prev = newHead;
	*head = newHead;

	return (newHead);
}
