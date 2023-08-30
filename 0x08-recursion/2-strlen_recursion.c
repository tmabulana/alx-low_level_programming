#include "main.h"
/**
 * _strlen_recursion - the string's length has to be printed
 * @s: this is the string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
if (*s != '\0')
{
return (1 + _strlen_recursion(s + 1));
}
return (0);
}
