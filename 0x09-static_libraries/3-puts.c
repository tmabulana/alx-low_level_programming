#include "main.h"
#include <string.h>
/**
 * _puts - prints a string that is followed by stdout, a new line
 * @str: string that is printed
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
