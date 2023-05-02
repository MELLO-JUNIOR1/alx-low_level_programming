#include "lists.h"
/**
 * *reverse_listint - Reverse listint_t list
 * @head: pointer to the pointer to the head
 * Return: pointer to the node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *current_node = *head;
listint_t *prv = NULL;

while (current_node != NULL)
{
*head = current_node->next;
current_node->next = prv;
prv = current_node;
current_node = *head;
}
*head = prv;

return (prv);
}
