#include "lists.h"
/**
 * free_list - add new node to linked list.
 *
 * @head: head of linked list
 * Return: list_t.
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		free(current->str);
		free(current);
		current = current->next;
	}

}
