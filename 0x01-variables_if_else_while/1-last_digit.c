#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Return: always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d",n,n%10);
	return (0);
}
