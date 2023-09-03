#include "main.h"
/**
 * _isupper - has to check upperclass character always
 * @c: parameter has to always be checked
 * Return: 1 always on success and 0 on failure
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
