#include "hash_tables.h"
/**
 * hash_table_delete - Deallocates memory used by a hash table.
 * @ht: A pointer to the hash table to be deleted.
 *
 * This function deallocates memory used by a hash table, including all its nodes.
 * It takes a pointer to the hash table to be deleted as its parameter.
 *
 * Returns: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table_ptr = ht;
	hash_node_t *node, *next_node;
	unsigned long int i;

	/* Loop through each index in the hash table's array */
	for (i = 0; i < ht->size; i++)
	{
		/* If the index is not empty, iterate through its nodes */
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				/* Free the memory allocated for the current node's key, value, and node itself */
				next_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next_node;
			}
		}
	}

	/* Free the memory allocated for the hash table's array and the hash table itself */
	free(table_ptr->array);
	free(table_ptr);
}
