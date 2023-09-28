#include "main.h"
/**
 * binary_to_uint - thsi program will convert binary numbers
 * to interger numbers
 * @b: the character pointer to a string containing the binary numbers
 * Return: this is convertred the decimal
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int len;
size_t i;
size_t j;
size_t sum;
size_t pow;
int base;
base = 2;
sum = 0;
pow = 1;
if (b == NULL)
return (0);
for (len = 0; b[len] != '\0'; len++)
	;
if (len == 1 && (b[0] == '0' || b[0] == '1'))
return (b[0] - 48);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
for (j = len - 1; j > 0; j--)
pow = pow *base;
sum = sum + (pow * (b[i] - 48));
len--;
pow = 1;
}
return (sum);
}
