#include "main.h"
/**
 * _strchr - the function has to locate a character in a string
 * @s: this is the string has to be searched
 * @c: the character tha has to be located
 * Return: if charatcter c is found, a pointer to the first occurence
 * If then c is not found - NULL
 */
char *_strchr(char *s, char c)
{
int index;
for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
