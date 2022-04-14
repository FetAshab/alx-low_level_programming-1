#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum all the parmaeter.
 *@n: passed parameter size
 *return: 0 if n = 0 else sum
 */
int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i;
    
    if (n == 0)
    return 0;
    else

    va_start(ap ,n);

    int sum = 0;
    for (i = 0; i < n; i++)
    {

    sum += va_arg(ap,int);
    }
    return sum;

    va_end(ap);
    

    }
