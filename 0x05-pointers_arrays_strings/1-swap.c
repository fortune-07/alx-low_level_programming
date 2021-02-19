#include "holberton.h"
/**
*swap_int - swapping two integers.
*
*Return: Nothing.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
