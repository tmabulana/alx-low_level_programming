#include "main.h"
/**
 * _puts_recursion - the recursive function is to print to screen
 * @s: the pointer to the string
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
if (*s == '\0')
{
_putchar('\n');
}
}
