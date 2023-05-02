#include "lists.h"

/**
 * print_listint_safe - Function prints a list
 * @head: pointer
 * Return: Return n
 */
size_t print_listint_safe(const listint_t *head)
{
int n = 0;
const listint_t *p;
const listint_t *not;

p = head;
not = head;

if (head == NULL)
exit(98);

while (not_n)
{
printf("[%p] %d\n", (void *)p, p->n);
n++;

if (not <= not->next)
{
printf("-> [%p] %d\n", (void *)not->next, not->next->n);
break;
}
p = p->next;
not = not->next;
}

if (not)
{
exit(98);
}

return (n);
}
