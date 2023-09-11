#include "main.h"
#include <stdlib.h>
/**
 * array_range - will create an array of integers
 * @min: the mimum value
 * @max: the maximum value
 * Return: the int pointer to the allocated memory
 */
int *array_range(int min, int max)
{
int i, l;
int *a;
if (min > max)
return (NULL);
l = max - min + 1;
a = malloc(sizeof(int) * l);
if (a == NULL)
return (NULL);
for (i = 0; i < l; i++)
{
a[i] = min;
min++;
}
return (a);
}

