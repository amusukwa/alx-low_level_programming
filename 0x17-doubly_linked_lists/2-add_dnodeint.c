#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnode int- adds new node at the beginning of a linked list
 * @head: double pointer to list_t list
 * @n: new int to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;

if (!head)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
