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


HashTable *hash_table_create(size_t size)
{
    HashTable *table = NULL;
    size_t i;
    table = (HashTable *)malloc(sizeof(HashTable));
    if (table == NULL)
    {
        return NULL; 
    }

    
    table->size = size;
    table->array = (HashNode **)malloc(sizeof(HashNode *) * size);
    if (table->array == NULL)
    {
        free(table); 
        return NULL;
    }

    for (i = 0; i < size; i++) {
        table->array[i] = NULL;
    }

    return table;
}



