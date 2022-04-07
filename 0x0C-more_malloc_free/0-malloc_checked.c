#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: parmaetr passed
 *
 * Return: the pointer if not null 
 * if mallloc fails, Return value 98
 */
void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	return (c);
}
