#include "holberton.h"
/**
*swap_int - swapping two integers.
*@a: holds the value for integer a.
*@b: holds the value for interger b.
*Return: Nothing.
*/
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
