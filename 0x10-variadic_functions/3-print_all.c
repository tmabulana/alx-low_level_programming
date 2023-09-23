#include "variadic_functions.h"
/**
 * print_all - will print any argument to the given function
 * @format: this is the argument specifier
 * Return: any argument that will be given on the
 * format specifier
 */
void print_all(const char * const format, ...)
{
int i, check_stat;
char *str;
va_list spc;
va_start(spc, format);
i = 0;
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'i':
printf("%d", va_arg(spc, int));
check_stat = 0;
break;
case 'f':
printf("%f", va_arg(spc, double));
check_stat = 0;
break;
case 'c':
printf("%c", va_arg(spc, int));
check_stat = 0;
break;
case 's':
str = va_arg(spc, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
check_stat = 0;
break;
default:
check_stat = 1;
break;
}
if (format[i + 1] != '\0' && check_stat == 0)
printf(", ");
i++;
}
printf("\n");
va_end(spc);
}
