#include "main.h"
/**
 * print_array - a function that prints n elements of an array only
 * @a: array name
 * @n: this is the number of elements of the array to be exactly printed
 * Return: a and n inputs only
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
