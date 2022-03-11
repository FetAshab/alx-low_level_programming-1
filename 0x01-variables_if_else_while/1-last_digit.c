#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: always 0 (sucess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNo = n%10;
	printf("Last digit of %d is %d",lastNo);
	return (0);
}
