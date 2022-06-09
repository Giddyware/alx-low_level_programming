#include "lists.h"

/**
 * dlistint_len - function
 * @h: param
 *
 * Return: Number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);

}
/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: param
 * @index: param
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;
	size_t len = dlistint_len(*head);

	if (*head == NULL || index > len)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	if (index == len)
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
