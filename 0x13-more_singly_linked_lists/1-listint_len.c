#include "lists.h"

/**
 * listint_len - singly linked list
 *
 * @h: Head of list.
 * Return: size_t of list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
