#include<stdio.h>
#include "main.h"
/*
 *_strcat(char *dest, char *src) - concatinate two string
 *
 *Returns: concatinated String
 */
char *_strcat(char *dest, char *src)
{
   int i=0,j=0;
   
while(dest[i] != '\0')
i++;
while(src[j] != '\0')
{
   dest[i] = src[j];
i++;
j++;
}
dest[i] ='\0';
return (dest);
}
