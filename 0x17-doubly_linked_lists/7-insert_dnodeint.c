#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - inserts new node in list at idx
* @h: pointer to the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the node
* Return:pointer to new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i;
dlistint_t *new;
dlistint_t *temp = *h;

new = malloc(sizeof(dlistint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;
new->next = NULL;

if (idx == 0)
{
new->next = *h;
if (*h)
(*h)->prev = new;
*h = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
if (temp->next)
temp->next->prev = new;
temp->next = new;
new->prev = temp;
return (new);

}
else
{
temp = temp->next;
}
}
free(new);
return (NULL);
}
