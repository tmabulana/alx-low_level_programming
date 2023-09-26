#include "lists.h"
/**
 * free_listint - this is the funtction that frees a linked list
 * @head: the pointer to the first node of the list
 * Return: there is no return value
 */
void free_listint(listint_t *head)
{
listint_t *temp;
while ((temp = head) != NULL)
{
head = head->next;
free(temp);
}
}
