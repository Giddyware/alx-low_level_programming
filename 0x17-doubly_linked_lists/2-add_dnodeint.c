#include "lists.h"

/**
 * *add_dnodeint - add node
 * @head: param
 * @n: param
 *
 * Return: Number of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (*head);
	new->n = n;
	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	else
	{
		(*head)->prev = new;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (new);
	}
}
