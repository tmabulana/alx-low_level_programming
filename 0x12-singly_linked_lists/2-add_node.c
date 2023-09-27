#include "lists.h"
int len(const char *str);
/**
 * add_node - will add anode to the beginning of the last list
 * @head: the pointer to the head of the list
 * @str: the string to be inserted to the first position
 * Return: the pointer to the first node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
if (*head == NULL)
new_node->next = NULL;
else
new_node->next = *head;
new_node->str = strdup(str);
new_node->len = len(str);
*head = new_node;
return (*head);
}
/**
 * len - will get the length of str
 * @str: the string to get its lenght
 * Return: the length of the string
 */
int len(const char *str)
{
int i;
if (str == NULL)
return (0);
i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}
