#include <stdio.h>
/**
 * main - has to print the number of arguments that are passed
 * into it
 * @argc: number of command line argument present
 * @argv: the array that contains the program command line arg
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
