#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end- adds new node at the tail of a linked list
 * @head: double pointer to list_t list
 * @n: new int to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp = *head;

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
temp = temp->next;

temp->next = new_node;
new_node->prev = temp;

return (new_node);
}
