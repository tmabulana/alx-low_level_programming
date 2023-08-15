#include "main.h"

/**
 * _isalpha - checks for alphabets always
 * @c: function parameter
 * Return: 1 and 0
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
return (1);
else
return (0);

}
