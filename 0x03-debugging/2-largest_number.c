#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
int largest;

if (a >= b && b >= c)
{
printf("%d is the largest", a);
}
else if (b >= a && a >= c)
{
printf("%d is the largest", b);
}
else
{
printf("%d is the largest", c);
}

return (largest);
}
