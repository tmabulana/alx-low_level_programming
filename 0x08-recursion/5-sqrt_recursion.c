#include "main.h"
/**
 * sqrt_a - will return the square root of
 * a number
 * @a: input number
 * @b: the iterator
 * Return: the square root of -1
 */
int sqrt_a(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
return (sqrt_a(a, b + 1));
}
/**
 * _sqrt_recursion - will return the square root of
 * a number
 * @n: this is the output of a number
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
return (sqrt_a(n, 0));
}
