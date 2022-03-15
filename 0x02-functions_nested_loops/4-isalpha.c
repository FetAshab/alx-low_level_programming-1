#include "main.h"
/**
 *_isalpha - check if it is alphabet
 *@c: the passed parameter
 *Return: 1 if it is alphatbet 0 ifnot
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
return (1);
else
return (0);
}
