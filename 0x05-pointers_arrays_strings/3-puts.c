#include "holberton.h"
/**
* _puts - printing a string to console.
*@str: holds strings value for the program.
* Return: void.
*/
void _puts(char *str)
{
int count = 0;
int i;

for (i = 0;
str[i] != '\0';
i++)
count++;

for (i = 0;
i < count;
i++)
_putchar(str[i]);

_putchar('\n');
}
