#include "main.h"
/**
 * _strspn - a prefix substring is to be extracted by _strspn
 * @s: the string that has to be searched
 * @accept: the prefix that has to be measured
 * Return: the number of bytes of which is
 * consists only of bytes from the prefix accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;
while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
