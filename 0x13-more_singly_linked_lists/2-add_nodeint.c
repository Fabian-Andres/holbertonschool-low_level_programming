#include "lists.h"
/**
 * add_nodeint - add new node.
 *
 * @head: head of list.
 * @n: node to add.
 * Return: new head.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
	{
		*head = new_node;
	}

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;
	return (*head);
}
