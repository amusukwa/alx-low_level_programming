#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns  number of elements the list_t list linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t list_len = 0;

while (h)
{
list_len++;
h = h->next;
}
return (list_len);
}
