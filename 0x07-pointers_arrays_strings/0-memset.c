#include "main.h"
/**
 * _memset - memory will be filled with a constatnt byte
 * @s: the memory area that will be filled
 * @b: char to be copied
 * @n: the number of times for b to be copied
 * Return: the pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
