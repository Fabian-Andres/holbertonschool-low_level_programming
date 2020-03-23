#include "lists.h"
/**
 * add_node - add new node to linked list.
 *
 * @head: head of linked list
 * @str: new string
 * Return: list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
		
	if (head == NULL)
	{
		*head = new_node;
	}

	while (str[i] != '\0')
		i++;

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
