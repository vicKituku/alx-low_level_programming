#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates a key/value pair in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add or update. Cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *tmp;
    char *val_copy;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Copy the value string to avoid memory issues */
    val_copy = strdup(value);
    if (val_copy == NULL)
        return (0);

    /* Get the index of the key in the hash table */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if the key already exists in the hash table */
    tmp = ht->array[index];
    while (tmp != NULL)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            /* Update the value if the key already exists */
            free(tmp->value);
            tmp->value = val_copy;
            return (1);
        }
        tmp = tmp->next;
    }

    /* Allocate memory for the new node and add it to the hash table */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(val_copy);
        return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(val_copy);
        free(new_node);
        return (0);
    }
    new_node->value = val_copy;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

