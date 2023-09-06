#include "main.h"
#include <stdlib.h>
/**
 * argstostr  - will concatinate all programs arguments
 * @ac: the argument count
 * @av: argument vector
 * Return: the pointer of the array of char
 */
char *argstostr(int ac, char **av)
{
char *aout;
int i, n, k = 0, len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
len++;
}
len += ac;
aout = malloc(sizeof(char) * len + 1);
if (aout == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (n = 0; av[i][n]; n++)
{
aout[k] = av[i][n];
k++;
}
if (aout[k] == '\0')
{
aout[k++] = '\n';
}
}
return (aout);
}
