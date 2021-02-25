#include "holberton.h"
/**
* isSqrt - function to find squareroot.
* @n: holds value of n.
* @i: holds value of i.
*
* Return: 0
*/
int isSqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (isSqrt(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: holds value of the integer.
*
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
int square = 2;

if (n < 0)
return (-1);
else if (n == 0 || n == 1)
return (n);
return (isSqrt(n, square));
}
