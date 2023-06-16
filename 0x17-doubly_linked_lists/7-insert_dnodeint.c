#include "lists.h"
#include <stdlib.h>

/**
 * *insert_dnodeint_at_index - Function that add node at an index
 * @idx: index
 * @n: data
 * @h: pointer
 * Return: Return new
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *crr = *h;
	dlistint_t *nx;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	for (i = 0; crr != NULL && i < idx - 1; i++)
		crr = crr->next;

	if (!crr)
	{
		free(new);
		return (NULL);
	}

	nx = crr->next;
	new->prev = crr;
	new->next = nx;
	crr->next = new;
	if (nx != NULL)
		nx->prev = new;
return (new);
}
