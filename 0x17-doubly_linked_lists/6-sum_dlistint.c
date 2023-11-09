#include "lists.h"

/**
 * sum_dlistint - sums the value of a dlist
 * @head: head node
 * Return: total sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
