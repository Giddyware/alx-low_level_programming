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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: param
 * @idx: param
 * @n: param
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i;
	size_t len = dlistint_len(*h);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (len < idx)
		return (NULL);
	if (idx == len)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	else
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (temp->next == NULL)
				return (NULL);
			temp = temp->next;
		}
		new->next = temp->next;
		new->prev = temp;
		temp->next->prev = new;
		temp->next = new;
	}
	return (new);
}
