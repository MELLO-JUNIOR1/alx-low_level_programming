#include "lists.h"

/**
 * *get_dnodeint_at_index - Function that get a node at an index
 * @head: pointer
 * @index: data
 * Return: Return head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

return (head);
}
