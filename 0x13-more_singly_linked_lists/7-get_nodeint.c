#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: input head
 * @index: input index
 * Return: nth node of a listint_t linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	if (!node)
		return (NULL);
	node = head;
	for (n = 0; n < index; n++)
		node = node->next;
	return (node);
}
