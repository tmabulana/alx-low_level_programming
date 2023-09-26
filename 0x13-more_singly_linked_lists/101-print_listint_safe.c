#include "lists.h"
/**
 * free_listp - the free linked list
 * @head: this is the head of the list
 * Return: there is no return
 */
void free_listp(listp_t **head)
{
listp_t *temp;
listp_t *curr;
if (head != NULL)
{
curr = *head;
while ((temp = curr) != NULL)
{
curr = curr->next;
free(temp);
}
*head = NULL;
}
}
/**
 * print_listint_safe - will print the linked list
 * @head: the pointer to the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nnodes = 0;
listp_t *hptr, *new, *add;
hptr = NULL;
while (head != NULL)
{
new = malloc(sizeof(listp_t));
if (new == NULL)
exit(98);
new->p = (void *)head;
new->next = hptr;
hptr = new;
add = hptr;
while (add->next != NULL)
{
add = add->next;
if (head == add->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_listp(&hptr);
return (nnodes);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
nnodes++;
}
free_listp(&hptr);
return (nnodes);
}
