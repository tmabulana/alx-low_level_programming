#include "main.h"
#include <stdio.h>
/**
 * rot13 - rot13 has to be encoded
 * @s: has to be pointed to string parameters
 * Return: *s
 */
char *rot13(char *s)
{
int i;
int j;
char data1[] =
"ABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == data1[j])
{
s[i] = datarot[j];
break;
}
}
}
return (s);
}
