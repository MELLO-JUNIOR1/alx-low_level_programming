#include "lists.h"
/**
 * *insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to the pointer to the head
 * @idx: index where the new node should be added
 * @n: date of the new node
 * Return: the address of the new node || NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_n = malloc(sizeof(listint_t));
unsigned int count = 0;
listint_t *current = *head;

if (new_n == NULL)
return (NULL);

new_n->n = n;
if (idx == 0)
{
new_n->next = *head;
*head = new_n;
return (new_n);
}

while (current != NULL && count < idx - 1)
{
current = current->next;
count++;
}

if (current == NULL)
{
free(new_n);
return (NULL);
}

new_n->next = current->next;
current->next = new_n;

return (new_n);
}
