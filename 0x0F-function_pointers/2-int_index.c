#include "function_pointers.h"
/**
 * int_index - it is to search for an integer
 * @array: to target the array holding int
 * @size: the array size
 * @cmp: the function pointer to compare seacrh int
 * Return: int element match -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
