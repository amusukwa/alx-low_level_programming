#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Gives the index of a key in the hash table array.
 * @key: The key to be hashed.
 * @size: The size of the hash table array.
 *
 * Return: The index at which the key should be stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int hash_value;
unsigned long int index;

if (key == NULL || size == 0)
return (0);
hash_value = hash_djb2(key);
index = hash_value % size;
return (index);
}
