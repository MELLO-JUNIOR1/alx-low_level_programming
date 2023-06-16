#include "lists.h"

/**
 * free_dlistint - Function that frees nodes
 * @head: pointer to the first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *crr = head;

	while (head != NULL)
	{
		crr = head->next;
		free(head);
		head = crr;
	}
}
