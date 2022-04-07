#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - exit 98if null
 * @b: parmaetr passed
 * Return: the parameter if not null 
 */
void *malloc_checked(unsigned int b)
{
	    char *c;

	c = malloc(b);
	if (c == NULL)
	exit(98);
	return c;

}
