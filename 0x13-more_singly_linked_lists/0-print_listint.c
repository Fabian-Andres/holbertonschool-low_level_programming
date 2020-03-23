#include "lists.h"

/**
 * print_listint - check the code for Holberton School students.
 *
 * @h: Head of list.
 * Return: size_t of list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
