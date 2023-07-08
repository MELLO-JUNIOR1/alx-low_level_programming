#include "hash_tables.h"
/**
 * hash_table_get - Function gets value associated with key
 * @ht: hashtable
 * @key: key
 * Return: Return NULL || value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cell;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	cell = ht->array[i];
	while (cell && strcmp(cell->key, key) != 0)
		cell = cell->next;

return ((cell == NULL) ? NULL : cell->value);
}
