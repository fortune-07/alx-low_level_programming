#include "holberton.h"
/**
* print_rev - printing a string in reverse.
* @str: holds string value.
* Return: void.
*/
void print_rev(char *str)
{
int count = 0;
int i;

for (i = 0; str[i] != '\0'; i++)
count++;

for (i = count - 1; i >= 0; i--)
_putchar (str[i]);

_putchar ('\n');
}
