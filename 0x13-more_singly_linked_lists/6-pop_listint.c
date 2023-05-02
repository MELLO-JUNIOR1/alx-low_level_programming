#include "lists.h"

/**
 * pop_listint - Delete the head node of a listint_t list
 * and return the head node's data(n)
 * @head: pointer to the pointer to the head
 * Return: The head node's data(n) || 0
 */
int pop_listint(listint_t **head)
{
listint_t *addr;
listint_t *alt;
int value;

if (!*head)
return (0);

alt = *head;
value = alt->n;
addr = alt->next;
free(alt);
*head = addr;

return (value);
}
