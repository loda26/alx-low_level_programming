#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node
 * @head: pointer to head node
 * @index: idx
 * Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		index--;
	}
	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}

	free(tmp);
	return (1);
}
