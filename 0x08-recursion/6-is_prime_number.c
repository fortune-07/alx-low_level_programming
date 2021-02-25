#include "holberton.h"
/**
* isPrime - function to find prime number.
* @n: holds value of an integer.
* @i: holds the value of integer.
*
* Return: Always 0.
*/
int isPrime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0)
return (0);
return (isPrime(n, i - 1));
}

/**
* is_prime_number - returns 1 if integer is prime number.
* @n: holds value of the integer.
*
* Return: 0.
*/
int is_prime_number(int n)
{
if (n < 3)
return (0);
return (isPrime(n, n - 1));
}
