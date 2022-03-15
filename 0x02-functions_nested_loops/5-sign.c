#include "main.h"
/**
 *print_sign - prints the sign
 *greater, iequal or lwssthean zero.
 *@n: receives parameter n
 *Return + for positive - for negative 0 for zero
 */
 int print_sign(int n)
 {
 if (n > 0)
 {
 _putchar('+');
 return (1);}
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
