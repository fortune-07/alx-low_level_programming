#include "holberton.h"
#include "_putchar.c"
/**
* print_chessboard - function that prints the chessboard.
* @a: parameter to hold the value of a string.
*
* _putchar: void.
*/
void print_chessboard(char (*a)[8])
{
unsigned int n, m, len, rows;
len = 0;
while (*((*a) + len) != 0)
len++;
rows = len / 8;

m = 0;
while (m < rows)
{
for (n = 0; n < 8; n++)
_putchar(a[m][n]);
_putchar('\n');
m++;
}
}
