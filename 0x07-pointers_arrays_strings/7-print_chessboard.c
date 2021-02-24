#include "holberton.h"
/**
* print_chessboard - function that prints the chessboard.
* @a: parameter to hold the value of a string.
*
* Return: void.
*/
void print_chessboard(char (*a)[8])
{
unsigned int i, f, len, row;

len = 0;
while (*((*a) + len) != 0)
len++;

row = len / 8;
f = 0;
while (f < row)
{
for (i = 0; i < 8; i++)
_putchar(a[f][i]);
_putchar('\n');
f++;
}
}
