#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that delets a node
 * @head: pointer
 * @index: index
 * Return: Return 1 || -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *crr = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(crr);
		return (1);
	}

	for (i = 0; crr != NULL && i < index; i++)
		crr = crr->next;

	if (crr == NULL)
		return (-1);

	if (crr->next != NULL)
		crr->next->prev = crr->prev;

	if (crr->prev != NULL)
		crr->prev->next = crr->next;

	free(crr);
return (1);
}
