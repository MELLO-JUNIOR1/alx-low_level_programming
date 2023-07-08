#include "hash_tables.h"
/**
 * hash_table_print - Function to print a table
 * @ht: table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned char comma_flag = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];

		while (node != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			comma_flag = 1;
		}
	}
	printf("}\n");
}
