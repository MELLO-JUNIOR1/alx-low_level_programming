#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the pointer to the head
 * @index: index of the node should be deleted
 * Return: 1 || -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev_node = NULL;
listint_t *current_node = *head;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(current_node);
return (1);
}

for (i = 0; i < index && alt; i++)
{
prev_node = current_node;
current_node = current_node->next;
}

if (!current_node)
return (-1);

prev_node->next = current_node->next;
free(current_node);
return (1);
}
