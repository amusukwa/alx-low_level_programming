#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes a node head in a linked list
 * @head:pointer to first element in the list
 * Return: the data inside the elements that was deleted
 * or 0 if lisy is empty
 */
int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (head == NULL || *head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
return (data);
}
