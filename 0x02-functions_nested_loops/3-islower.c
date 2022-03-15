#include "main.h"
#include<ctype.h>
/*
 * _islower - using proto type
 *
 * Return: Always 0 (success)
 */
int _islower(int c){
  if(c > 'a' && c <= 'z')
  {
  return (1);
  }
     else
     {
       return (0);
     }
     }
