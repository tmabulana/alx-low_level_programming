#include "function_pointers.h"
/**
 * array_iterator - has to iterate through an array
 * @array: the target array
 * @size: the array size
 * @action: the function pointer to the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(*array);
array++;
}
}
