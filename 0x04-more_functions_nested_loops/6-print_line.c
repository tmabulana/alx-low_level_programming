#include "main.h"
/**
 * print_line - straight line has to be printed on the terminal
 * @n: the number will be printed numerous times
 * Return: void
 */
void print_line(int n);
{
int n;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(95);
}
_putchar('\n');
}
}
