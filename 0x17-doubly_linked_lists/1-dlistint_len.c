#include "lists.h"

/**
 * dlistint_len - function to print len
 *
 * @h: head doubly linked list
 * Return: number.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
