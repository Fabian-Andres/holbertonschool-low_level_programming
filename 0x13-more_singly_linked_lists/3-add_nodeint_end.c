#include "lists.h"
/**
 * add_nodeint_end - add new node to end.
 *
 * @head: head of list.
 * @n: node to add.
 * Return: new head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	if (current == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	return (new_node);
}
