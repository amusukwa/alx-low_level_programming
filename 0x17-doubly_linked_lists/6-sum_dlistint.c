#include "lists.h"
 /**
  * sum_dlistint- Calculaites the sum of all the data (n) in a listint_t list
  * @head:pointer to first element of list
  * Returns: 0 if list is empty
  */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
