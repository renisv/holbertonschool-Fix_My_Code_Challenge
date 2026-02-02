#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @head: pointer to the head pointer of the list
 * @index: index of the node to delete (starting at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;

	/* move to the node at position index */
	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (-1);

	/* link previous node to next node */
	if (node->prev != NULL)
		node->prev->next = node->next;
	else
		*head = node->next; /* deleting the head */

	/* link next node back to previous node */
	if (node->next != NULL)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
