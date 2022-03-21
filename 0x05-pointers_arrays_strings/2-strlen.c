#include "main.h"
/**
 * _strlen - The length of the string
 * @s: parameter passed 
 * Return: the length of the string
 */
int _strlen(char *s)
{   
	count = 0;
	
	while(*(s + count) != '\0')
	{
	count++;
	}
	return (count);
}
