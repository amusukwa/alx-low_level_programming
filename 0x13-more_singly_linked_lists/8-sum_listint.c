#include "lists.h"
 /**
  * sum_listint - Calculates the sum of all the data (n) in a listint_t list
  * @head:pointer to first element of list
  * Returns: 0 if list is empty
  */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
