#include "hash_tables.h"
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash value as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash_value;
    int current_char;

    hash_value = 5381;
    while ((current_char = *str++))
        hash_value = ((hash_value << 5) + hash_value) + current_char; /* hash_value * 33 + current_char */

    return (hash_value);
}

