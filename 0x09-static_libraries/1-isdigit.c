#include "main.h"
/**
 * _isdigit - function that checks for 0 through 9 only
 * @c: parameter to be checked always
 * Return: 1 on success and always 0 on failure
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
return (0);
}
