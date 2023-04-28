#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: pointer to the head
 */
void free_list(list_t *head)
{
list_t *temp;

while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
