#include "main.h"
/**
 * __strncpy - strings are to be copied
 * @dest: string destination
 * @src: string source
 * @n: the number of bytes that are to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0 ; i < n && src[i] != '\0' ; i++)
dest[i] = src[i];
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
