#include "lists.h"
/**
 * add_nodeint_end - will add  a node to the end of a list
 * @n: the data to the pointer that will be pointing to the head
 * of the list
 * Return: this addresses the element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;
(void)temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
temp = *head;
if (*head == NULL)
{
*head = new;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (*head);
}
