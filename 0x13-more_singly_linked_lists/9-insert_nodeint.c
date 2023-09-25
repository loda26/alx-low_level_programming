#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: input head
 * @idx: input index
 * @n: data
 * Return: inserts a new node at a given position
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new_node = malloc(sizeof(listint_t));
	unsigned int i;

	if (!head || !new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	node = *head;
	for (i = 0; node; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = node->next;
			node->next = new_node;
			return (new_node);
		}
		node = node->next;
	}
	free(new_node);
	return (NULL);
}
