#include "main.h"
/**
 * _strpbrk - function searches string for any of a set of bytes
 * @s: has to locate the first occurence
 * @accept: the bytes to be searched
 * Return: when a set is mathced, a pointer to the matched byte
 * If no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
