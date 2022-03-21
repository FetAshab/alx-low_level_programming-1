#include<stdio.h>
/**
 * swap_int - swaps num
 * @a: parameter passed
 * @b:parameter passed
 * REturn: the swapped num
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
