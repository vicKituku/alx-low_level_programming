#include "hash_tables.h"

/**
 * get_key_index - Get the index at which a key/value
 * pair should be stored in the array of a hash table.
 * @key: The key to get the index of.
 * @table_size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int table_size)
{
    unsigned long int hash_value = hash_djb2(key);
    unsigned long int index = hash_value % table_size;
    return (index);
}

