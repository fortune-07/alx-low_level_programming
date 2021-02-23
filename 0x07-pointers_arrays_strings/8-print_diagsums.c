#include "holberton.h"
#include <stdio.h>
/**
* print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
* @a: A parameter to hold the value of an integer.
*
* Return: void.
*/
void print_diagsums(int *a, int size)
{
int m, sum, sum2;

sum = 0;
for (m = 0; m < size; m++)
sum += *(a + ((size * m) + m));

sum2 = 0;
for (m = 1; m <=size; m++)
sum2 += *(a + ((size * m) - m));
printf("%d, %d\n", sum, sum2);
}
