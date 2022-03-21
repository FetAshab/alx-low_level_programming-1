#include "main.h"
/**
*_puts - prints a string
*@str: prints a string.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		put(*str);
		str++;
	}
	put('\n');
}
