#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a listint_t
 * @head: pointer to the head of linked list
 * @n: number stored in the new node
 * Return: Address of the new node || NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *last;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

last = *head;
while (last->next != NULL)
last = last->next;

last->next = new;

return (new);
}
