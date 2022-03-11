#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char small = 'a';

while (small <= 'z')
	{
	if (small == 'e' || small == 'q')
	{
		continue;
	}
		putchar(small);
	small++;
	putchar('\n');
	return (0);
}
