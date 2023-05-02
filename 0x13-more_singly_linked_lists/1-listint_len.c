#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: pointer
 *
 * Return: Return s
 */
size_t listint_len(const listint_t *h)
{
size_t s = 0;

while (h)
{
s++;
h = h->next;
}

return (s);
}
