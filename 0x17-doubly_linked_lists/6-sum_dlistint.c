#include "lists.h"

/**
 * sum_dlistint - the sum of all the data
 * @head: param
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
