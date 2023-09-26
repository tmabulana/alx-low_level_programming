#include "lists.h"
/**
 * free_listint2 - this will free a list of nodes and then set the
 * head to NULL
 * @head: the pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL || *head == NULL)
return;
while ((*head)->next != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
free(*head);
*head = NULL;
}
