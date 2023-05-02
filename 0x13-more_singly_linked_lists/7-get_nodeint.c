#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a listint_t
 * @head: pointer to the head
 * @index: index of the node
 * Return: Pointer to the nth node in the list || NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *node = head;

while (node != NULL && i < index)
{
node = node->next;
i++;
}

if (node == NULL)
return (NULL);

return (node);
}
