#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - sum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the sum of the two a and b
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - subtract two numbers
 * @a: the first number
 * @b: the second number
 * Return: the difference between a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - multiplication of two numbers
 * @a: the first number
 * @b: the second number
 * Return: the multiplication of both a and b
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: resuslt of division a by b
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - remainder of the division of two numbers
 * @a: the first number
 * @b: the second number
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
return (a % b);
}
