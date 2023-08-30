#include "main.h"
/**
 * factorial - has to get the factorial of a number
 * @n: factor to get factorialized
 * Return: the factor of n
 */
int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
return (n * factorial(n - 1));
}
