#include "lists.h"
 /**
  * sum_listint- ass sum of nodes
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
