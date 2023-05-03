#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to pointer to head of the linked list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *tmp_node;

while (*h != NULL)
{
count++;
if ((*h)->next >= *h)
{
tmp_node = *h;
*h = NULL;
free(tmp_node);
break;
}
tmp_node = *h;
*h = (*h)->next;
free(tmp_node);
}

return (count);
}
