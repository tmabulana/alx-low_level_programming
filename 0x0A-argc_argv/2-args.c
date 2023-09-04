#include <stdio.h>
/**
 * main - have to print all the arguments it receives
 * @argc: the number of command line argument
 * @argv: the array that contains the program command line arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
