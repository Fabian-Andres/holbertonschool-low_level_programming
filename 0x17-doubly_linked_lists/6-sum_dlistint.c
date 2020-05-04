#include "lists.h"
/**
 * sum_dlistint - function sum list
 *
 * @head: Head node
 * Return: return sum.
 */
int sum_dlistint(dlistint_t *head)
{
	int n = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		n += head->n;
		head = head->next;
	}
	return (n);
}
