#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of n
 * @head: pointer
 * Return: Return sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

return (sum);
}
