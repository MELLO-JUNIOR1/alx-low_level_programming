#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the pointer to the head
 * @index: index of the node should be deleted
 * Return: 1 || -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node = *head;
unsigned int count = 0;
listint_t *prv = NULL;

while (current_node != NULL && count < index)
{
prv = current_node;
current_node = current_node->next;
count++;
}

if (current_node == NULL)
return (-1);

if (prv == NULL)
{
*head = current_node->next;
free(current_node);
}
else
{
prv->next = current_node->next;
free(current_node);
}
return (1);
}
