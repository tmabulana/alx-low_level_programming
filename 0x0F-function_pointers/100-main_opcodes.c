#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes - will print the opcodes of the program
 * @a: the address of the main function
 * @n: the number of bytes to print
 * Return: voi
 */
void print_opcodes(char *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");
}
/**
 * main - will print the opcode of its own main function
 * @argc: argumenrt count
 * @argv: the argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int n;
if (argc != 2)
{
printf("Error\n");
exit (1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);
return (0);
}
