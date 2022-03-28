#include "main.h"
/**
 * _memset - Assigns number of arrays by some variable
 * @s: parameter to store the array name
 * @b: parameter to store the value to be assigned
 * @n: parameter to store how much value is assigned
 * Return: the assigned array
 */
char *_memset(char *s, char b, unsigned int n);
{
for(unsigned int i=0;i<n;i++)
s[i]=b;

  return (s);
}
