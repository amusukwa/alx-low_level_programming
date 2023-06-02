#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns  number of elements the list_t list linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t listsize = 0;

while (h)
{
listsize++;
h = h->next;
}
return (listsize);
}


