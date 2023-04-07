#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table with the specified size.
 *
 * @size: The size of the hash table.
 *
 * Return: On success, a pointer to the newly created hash table. On failure, NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht = NULL;
    unsigned long int i = 0;

    /* Allocate memory for the hash table */
    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    /* Initialize the hash table */
    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL) {
        free(ht);
        return (NULL);
    }

    /* Set all elements of the array to NULL */
    for (i = 0; i < size; i++) {
        ht->array[i] = NULL;
    }

    return (ht);
}

