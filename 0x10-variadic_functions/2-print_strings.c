#include "variadic_functions.h"
/**
 *print_strings - prints string.
 *@separator: separates the string.
 *@n: size of the numbers to be passed.
 *
 *returns: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ap;
char *str;

va_start(ap,n);
for(i = 0; i < n; i++)
{
  str = va_arg(ap,char *);
  if(str)
printf("%s",str);
  else
    printf("%s","(nil));
if(i < (n-1))
printf("%s",separator);
}
va_end(ap);


}
