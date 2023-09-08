#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

#define HASH_TABLE_SIZE 1024

/**
 * hash_table_create - creates hash table
 * @size:input parameter
 * Return:returns hash table
 */

hash_table_t *hash_table_create(size_t size)
{

hash_table_t *table = NULL;
size_t i;
table = (hash_table_t *)malloc(sizeof(hash_table_t));

if (table == NULL)
{
return (NULL);
}

table->size = size;
table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

if (table->array == NULL)
{
free(table);
return (NULL);
}

for (i = 0; i < size; i++)
{
table->array[i] = NULL;
}
return (table);
}
