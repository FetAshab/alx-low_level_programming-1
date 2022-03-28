#include "main.h"
/**
 *_memcpy - copys the array
 *@dest: recives the array
 *@src: sends the array
 *@n: how much of it
 *Returns: dest
 */
void *_memcpy(char *dest,char *src,unsigned int n)
{
for(int i=0;i<n;i++)
{
dest[i]=src[i];
}
return (dest);
}
