#include "lists.h"

/**
 * listint_len - prints number of elements
 * @h: pointer
 *
 * Return: Return s
 */
unsigned int listint_len(const listint_t *h)
{
unsigned int s = 0;

while (h)
{
s++;
h = h->next;
}

return (s);
}
