#include <unistd.h>
/**
* _putchar - has to write the character c to stdout
* @c: the character to always print
* Return: 1 on success always
* on error, -1 has to be returned and error is set appropriately
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
