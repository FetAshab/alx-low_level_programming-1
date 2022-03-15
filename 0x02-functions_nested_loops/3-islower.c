#include "main.h"
/**
 * _islower - using proto type
 * @c - The parameter  c passed
 * Return: 1 when true 0 for false (success)
 */
int _islower(int c)
{
if (c > 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
