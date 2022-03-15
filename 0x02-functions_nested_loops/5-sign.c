#include "main.h"
/**
 *print_sign - prints the sign
 *greater,iqual or lessthan zero
 *@n: receives parameter n
 *Return: 1 for positive - for negative 0 for zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
