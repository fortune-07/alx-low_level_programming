#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - set integer 402 to 98.
 *
 * Return: Nothing.
 */
void reset_to_98(int *n)
{
int n;
*n = *n + n;
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int *n;

n = 402;
*n = &n;
printf("n=%d\n", n);
reset_to_98(&n);
printf("n=%d\n", n);
return (0);
}
