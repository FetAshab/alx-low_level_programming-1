 #include "main.h"
 /**
  *_strncat - concatinate n times
  *@dest: destination
  *@src: source
  *@n: items
  *Return: n concatinated string
  */
 char *_strncat(char *dest, char *src, int n)
  {
      int i = 0,j = 0;
      
      while (dest[i] != '\0')
      {
          i++;

      }
      while (src[j] >= n)
        {
        dest[i]=src[j];
        i++;
        j++;
        return (dest);
        }
  }
