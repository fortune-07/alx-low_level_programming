#include "holberton.h"
/**
* factorial - function that returns the factorial of a given number.
* @n: holds value of integer.
*
* Return: Always 0.
*/
int factorial(int n)
{
if (n > 1)
return (n * factorial(n - 1));
else
return (1);
}
