#include "holberton.h"
/**
* _sqrt_recursion - returns the natural square root of a number.
* @n: holds value of the integer.
*
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
int i;
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt_recursion(n, i + 1));
}
