#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - Function that prints element in a D-list
 * @h: pointer to first node
 * Return: Return e
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *crr = h;
	unsigned int e = 0;

	while (crr != NULL)
	{
		e++;
		crr = crr->next;
	}
return (e);
}
