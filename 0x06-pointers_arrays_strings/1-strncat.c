#include "main.h"
/**
 * _strncat - two strings are to be concatenated
 * @dest: the destination for the string
 * @src: source for the string
 * @n: to concatinate the number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;
for (i = 0 ; i < n && *src != '\0' ; i++)
{
dest[len + i] = *src;
src++;
}
dest[len + i] = '\0';
return (dest);
}
