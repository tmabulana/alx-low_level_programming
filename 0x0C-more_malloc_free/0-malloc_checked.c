#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - have to allocate memeory using malloc
 * @b: the input is int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
