#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
const listint_t *current = head, *prev = NULL;

while (current)
{
count++;
printf("[%p] %d\n", (void *)current, current->n);

if (current < prev)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
exit(98);
}

prev = current;
current = current->next;
}

return (count);
}
