#include "lists.h"
/**
 * add_node_end - Function to add a new node at the end of a list_t list
 * @head: pointer to the head
 * @str: the string
 * Return: pointer to the new node || NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *last_node;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = strlen(str);
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

last_node = *head;
while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = new;

return (new);
}
