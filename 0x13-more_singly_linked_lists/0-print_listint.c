#include "lists.h"
/**
 * print_listint - this will print the int data in a singly linked list
 * @h: this is the head pointer to the list
 * Return: number of nodes that are in the list
 */
size_t print_listint(const listint_t *h)
{
size_t count;
if (h == NULL)
return (0);
for (count = 0; h != NULL; count++)
{
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
