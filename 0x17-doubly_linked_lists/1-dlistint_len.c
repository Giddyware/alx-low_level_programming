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
