#include "main.h"
/**
* print_diagonal - diagonal has to be printed with regards to the parameter
* @n: the diagonal line has to be printed several times
* Return: void
*/

void print_diagonal(int n)
{
int n, j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
}
