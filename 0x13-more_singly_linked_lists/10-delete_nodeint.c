#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 *				at index index of a listint_t linked list
 * @head: input head
 * @index: input index
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *ex_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	for (i = 0; node; i++)
	{
		if (i == index)
		{
			ex_node->next = node->next;
			free(node);
			return (1);
		}
		ex_node = node;
		node = node->next;
	}
	return (-1);
}
