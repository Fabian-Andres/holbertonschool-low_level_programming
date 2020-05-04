#include "lists.h"

/**
 * insert_dnodeint_at_index - function insert
 *
 * @h: Head of node
 * @idx: position index
 * @n: elem list
 * Return: return addres of node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *newHead, *auxHead = *h;

	if (h == NULL)
		return (NULL);
	newHead = malloc(sizeof(dlistint_t));
	if (newHead == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (*h != NULL)
	{
		while (i < idx)
		{
			auxHead = auxHead->next;
			if (auxHead == NULL)
				return (NULL);
			i++;
		}
	}
	if (auxHead->next == NULL)
		return (add_dnodeint_end(h, n));
	newHead->n = n;
	newHead->prev = auxHead->prev;
	newHead->next = auxHead;
	auxHead->prev->next = newHead;
	auxHead->prev = newHead;

	return (newHead);
}
