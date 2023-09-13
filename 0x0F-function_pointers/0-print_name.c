#include "function_pointers.h"
/**
 * print_name - this is the fucntion that prints a name
 * @f: variable to hold a string name
 * @name: this is the name of the person
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
