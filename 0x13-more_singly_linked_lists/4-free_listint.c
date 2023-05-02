#include "lists.h"
/**
 * free_listint - Function that frees a list
 * @head: pointer
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *addr;

while (head != NULL)
{
addr = head->next;
free(head);
head = addr;
}
}
