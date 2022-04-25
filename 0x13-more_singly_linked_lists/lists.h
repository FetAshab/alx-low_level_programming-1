#ifndef __print__
#define __print__


#include <stdio.h>
#include <stdlib.h>
typedef struct listint_s
{
	    int n;
	        struct listint_s *next;
} listint_t;
print_listint();
#endif
