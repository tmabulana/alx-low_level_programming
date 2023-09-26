#include "lists.h"
/**
 * get_nodeint_at_index - it will retrieve a node at an index
 * @head: the pointer to the the first element of a list
 * @index: the node that at its desired position to retrieve
 * Return: the pointer to the retrieved node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a;
for (a = 0; a < index; a++)
{
if (head == NULL)
return (NULL);
head = head->next;
}
return (head);
}
