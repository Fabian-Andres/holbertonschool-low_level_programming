#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - print len whit linked list.
 *
 * @h: value of list_t
 * Return: size_t.
 */
size_t list_len(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
