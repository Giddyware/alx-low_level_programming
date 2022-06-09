#include "lists.h"

/**
 * free_dlistint - free node
 * @head: param
 *
 * Return: Number of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
