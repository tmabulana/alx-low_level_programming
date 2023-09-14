#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - will perform calculator functions on command line
 * @argc: the argument count
 * @argv: the argument vector
 * Return: the results of calc function execution
 */
int main(int argc, char *argcv[])
{
char *op;
int num1, num2;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argcv[1]);
op = (argcv[2]);
num2 = atoi(argcv[3]);
if (get_op_func(op) == NULL || op[1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
{
printf("Error\n");
exit(100);
}
printf("%d\n", get_op_func(op)(num1, num2));
return (0);
}
