#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list whit linked list.
 *
 * @h: value of list_t
 * Return: size_t.
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		i++;
	}
	return (i);
}
