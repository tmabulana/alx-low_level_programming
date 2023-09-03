#include "main.h"
/**
 * _strstr - a substring gets located
 * @haystack: this is the string that will get searched
 * @needle: substring to be located
 * Return: when the substring gets located, a pointer
 * will be returned to the beginning
 * Should the substring not be located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
int index;
if (*needle == 0)
return (haystack);
while (*haystack)
{
index = 0;
if (haystack[index] == needle[index])
{
do {
if (needle[index + 1] == '\0')
return (haystack);
index++;
} while (haystack[index] == needle[index]);
}
haystack++;
}
return ('\0');
}
