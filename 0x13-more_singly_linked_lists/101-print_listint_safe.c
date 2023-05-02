#include "lists.h"
/**
 * print_listint_safe - Prints a listint_t list
 * @head: pointer to the head of head
 * Return: number of heads list || 98
 */
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;

if (!head)
exit(98);

while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
count++;

if (head->next >= head)
{
head = head->next;
printf("-> [%p] %d\n", (void *)head, head->n);
break;
}
head = head->next;
}

return (count);
}
