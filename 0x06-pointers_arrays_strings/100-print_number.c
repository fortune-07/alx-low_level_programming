#include <stdio.h>
#include "holberton.h"
/**
* exponent - x to the power of y
* @x: base number
* @y: exponent
* Description: calcuates x^y*
* Return: x^y
**/
int exponent(int x, int y)
{
int power;

power = x;

if (x == 0)
return (0);
if (y == 0)
return (1);

while (y >= 2)
{
power  = power *x;
y--;
}
return (power);
}

/**
* print_number - print an int using only _putchar
* @number: int to be printed by function
* Return: nothing
**/
void print_number(int number)
{
int size, digit, counter, sign;

sign = 1;
digit = 0;
size = 1;
counter = number;

if (number < 0)
{
_putchar('-');
sign = -1;
}

for (; counter >= 10 || counter <= -10; size++)
{
counter = counter / 10;
}

counter = number;

while (size >= 2)
{
digit = (counter / exponent(10, size - 1)) * sign;
_putchar(digit + '0');
counter = counter % exponent(10, size - 1);
size--;
}
_putchar(sign *counter % 10 + '0');
}
