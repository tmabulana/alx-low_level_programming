#include "lists.h"
/**
 * create_new_node - this will create a new node
 * @n: this the data of the node
 * Return: the pointer to the node
 */
listint_t *create_new_node(int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
return (new_node);
}
/**
 * insert_nodeint_at_index - will isnert a node at an index in a list
 * @head: the pointer to the first element on the list
 * @idx: the index to the position of the new node is to be
 * inserted
 * @n: this is the data of the new node that was created
 * Return: this is the address of the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *tmp;
listint_t *tmp_old;
listint_t *new_node;
tmp = *head;
if (head == NULL)
return (NULL);
new_node = create_new_node(n);
if (new_node == NULL)
return (NULL);
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
if (idx == 0)
*head = new_node;
for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
tmp = tmp->next;
if (tmp == NULL)
return (NULL);
if (idx == 0)
new_node->next = tmp;
else
{
tmp_old = tmp->next;
tmp->next = new_node;
new_node->next = tmp_old;
}
return (new_node);
}
