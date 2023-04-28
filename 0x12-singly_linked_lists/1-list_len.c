#include "lists.h"

/**
 * list_len - Function that prints the number of ellements
 * @h: pointer
 * Return: Return n
 */

size_t list_len(const list_t *h)
{
unsigned int count = 0;

while (h)
{
count++;
		h = h->next;
}



return (count);
}
