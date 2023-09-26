#include "lists.h"
/**
 * pop_listint - this will delete the first node of a list and retur its data
 * @head: this is the pointer to the left
 * Return: the int
 */
int pop_listint(listint_t **head)
{
int n;
listint_t *tmp;
if (head == NULL || *head == NULL)
return (0);
n = (*head)->n;
tmp = *head;
*head = (*head)->next;
free(tmp);
return (n);
}
