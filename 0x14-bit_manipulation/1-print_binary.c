#include "main.h"
/**
 * print_bi - will print the binary representation of a number recursively
 * @n: this is the decimal input
 * Return: the void
 */
void print_bi(unsigned long int n)
{
if (n == 0)
return;
print_bi(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}
/**
 * print_binary - will print the binary
 * @n: the decimal that is to be converted
 */
void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
{
print_bi(n);
}
}
