#include "lists.h"

/**
 * deleteNode - function to delete
 *
 * @head: Head of node
 * @vector: position delete
 * Return: 1 if works -1 if fail
 */
int deleteNode(dlistint_t **head, dlistint_t *vector)
{
	if (*head == NULL || vector == NULL)
		return (-1);
	if (*head == vector)
		*head = vector->next;
	if (vector->next != NULL)
		(vector->next)->prev = vector->prev;
	if (vector->prev != NULL)
		(vector->prev)->next = vector->next;
	free(vector);
	return (1);
}
/**
 * delete_dnodeint_at_index - function remove head
 *
 * @head: Head of node
 * @index: position
 * Return: the position of last node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *vector;
	int value = 0;

	if (head == NULL)
		return (-1);
	vector = *head;
	for (i = 0; vector != NULL && i < index; i++)
	{
		vector = vector->next;
	}
	if (vector == NULL)
		return (-1);
	value = deleteNode(head, vector);
	if (value == 1)
		return (1);
	return (-1);
}
