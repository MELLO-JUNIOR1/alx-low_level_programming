#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *first_node = head;
listint_t *second_node = head;

if (!head)
return (NULL);

while (first_node && second_node && second_node->next)
{
second_node = second_node->next->next;
first_node = first_node->next;
if (second_node == first_node)
{
first_node = head;
while (first_node != second_node)
{
first_node = first_node->next;
second_node = second_node->next;
}
return (second_node);
}
}

return (NULL);
}
