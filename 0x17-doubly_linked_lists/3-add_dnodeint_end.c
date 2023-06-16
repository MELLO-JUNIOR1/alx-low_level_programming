#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_dnodeint_end - Funtion that adds node at the end of D-list
 * @head: pointer to first node
 * @n: data
 * Return: Return NULL || head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (!tmp)
	{
		new->n = n;
		new->prev = NULL;
		new->next = *head;
		*head = new;
		return (*head);
	}

	while (tmp->next != NULL)
		tmp = tmp->next;
	new->n = n;
	new->prev = tmp;
	new->next = NULL;
	tmp->next = new;

return (*head);
}
