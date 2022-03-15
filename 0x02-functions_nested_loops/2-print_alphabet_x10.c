#include "main.h"
/**
 * print_alphabet_x10 - printing a-z 10x
 *
 * Return: Always 0 (sucess)
 */
void print_alphabet_x10(void){
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
		{
		_putchar(i);
		}
		_putchar('\n');
		return (0);
	}
