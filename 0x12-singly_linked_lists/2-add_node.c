#include "lists.h"

/**
 * add_node - Function that adds a node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: the string to be added
 * Return: the address of the new node, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

if (head == NULL || str == NULL)
return (NULL);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = strlen(str);
new->next = *head;

*head = new;

return (new);
}
