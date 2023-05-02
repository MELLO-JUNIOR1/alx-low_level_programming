#include "lists.h"

/**
 * print_listint_safe - Function prints a list
 * @head: pointer
 * Return: Return n
 */
size_t print_listint_safe(const listint_t *head)
{
int n = 0;
const listint_t *print;
const listint_t *not_node;

print = head;
not_n = head;

if (head == NULL)
exit(98);

while (not_n)
{
printf("[%p] %d\n", (void *)print, print->n);
n++;

if (not_n <= not_n->next)
{
printf("-> [%p] %d\n", (void *)not_n->next, not_n->next->n);
			break;
}
print = print->next;
not_n = not_n->next;
}

if (not_n)
{
exit(98);
}

return (n);
}
