#include "holberton.h"
/**
*swap_int - swapping two integers.
*@a: parameter for integer a.
*@b: parameter for integer b.
*Return: Nothing.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
