
#include<stdio.h>                                                              
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void){             
	char capital = 'A';
	char small = 'a';
	while (small <= 'z')
	{	
	putchar(small);
	small++;
	}
	while (capital <= 'Z')
	{
	putchar(capital);
	capital++;
	}
	putchar('\n');
	return (0);
}
