#include "lists.h"

/**
 * add_dnodeint - adds new head node to dllist
 * @head: head node
 * @n: int
 *
 * Return: address of new node or Null
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->prev = Null;
	if (!*head)
	{
		*head = new;
		new->next = Null;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new
	}
	return (new);
}