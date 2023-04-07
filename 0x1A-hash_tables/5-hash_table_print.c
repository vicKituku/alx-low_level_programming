#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description:
 * This function prints out all the key/value pairs in a hash table.
 * The pairs are printed in the order they appear in the array of the hash table.
 * If the hash table is empty, this function does nothing.
 *
 * Parameters:
 * - ht: A pointer to the hash table to print.
 */
void hash_table_print(const hash_table_t *ht)
{
	/* Initialize variables */
	hash_node_t *current_node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	/* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	/* Start printing the hash table */
	printf("{");

	/* Loop through the hash table array */
	for (i = 0; i < ht->size; i++)
	{
		/* Check if there is a node at this index in the array */
		if (ht->array[i] != NULL)
		{
			/* Add a comma before printing the next key/value pair, if necessary */
			if (comma_flag == 1)
				printf(", ");

			/* Loop through all the nodes at this index */
			current_node = ht->array[i];
			while (current_node != NULL)
			{
				/* Print the key/value pair */
				printf("'%s': '%s'", current_node->key, current_node->value);

				/* Move on to the next node, if any */
				current_node = current_node->next;

				/* Add a comma before printing the next key/value pair, if necessary */
				if (current_node != NULL)
					printf(", ");
			}

			/* Set the comma_flag to 1 since we've printed at least one key/value pair */
			comma_flag = 1;
		}
	}

	/* End the hash table */
	printf("}\n");
}

