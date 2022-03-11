#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char small;
while (small != 'q' || small != 'e')
{
	while (small <= 'z')
	{
		putchar(small);
	putchar('\n');
	small++;
	}
}
}
