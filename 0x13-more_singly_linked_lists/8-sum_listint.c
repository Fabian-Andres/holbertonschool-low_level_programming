#include "lists.h"
/**
 * sum_listint - sum the value n into head.
 *
 * @head: head of list.
 * Return: value to sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
