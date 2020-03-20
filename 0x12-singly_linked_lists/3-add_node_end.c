#include "lists.h"
/**
 * add_node_end - add new node to linked list.
 *
 * @head: head of linked list
 * @str: new string
 * Return: list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	current = *head;
	if (current == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new_node;

	return (new_node);
}
