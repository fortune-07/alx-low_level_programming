#include "holberton.h"
/**
* is_prime_number - returns 1 if the input integer is a prime number.
 @n: holds value of an integer.
*
* Return: Always 0.
*/
int is_prime_number(int n)
{
int isPrime = true;

if (n == 0 || n == 1)
{
isPrime = false;
}
else
{
for (int i = 2; i <= n / 2; ++i)
{
if (n % i == 0)
{
isPrime = false;
break;
}
}
}
return (isPrime);
}
