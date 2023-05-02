#include "lists.h"

/**
 * reverse_listint - Function to reverse list
 * @head: pointer
 * Return: Return head
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prv = NULL;
listint_t *next;

while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next;
}

*head = prev_node;

return (*head);
}
