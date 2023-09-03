#include "main.h"
/**
 * _memcpy - @n bytes gets copied from the memory area @s
 * to memory which is @dest
 * @n: has to copy function
 * @src: bytes from the memory area
 * @dest: to the memory area
 * Return: the pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
