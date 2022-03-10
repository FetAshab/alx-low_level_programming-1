#include<stdio.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{       int intSize;
	float floatSize;
	long int longInt;
	long long int longLongInt;
	char charSize;

	printf("Size of a char: %lu byte(s)\n", sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", sizeof(intSize));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatSize));
	
	return (0);	
}
