#include "lists.h"
/**
 * add_nodeint - this will add a node ath the beginning of a list
 * @head: the pointer to the head pointer
 * @n: the new int to be created
 * Return: will return the head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
if (head == NULL)
return (0);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
if (*head == NULL)
new_node->next = *head;
new_node->n = n;
*head = new_node;
return (0);
}
