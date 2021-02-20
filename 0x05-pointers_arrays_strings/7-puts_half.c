#include "holberton.h"
/**
* puts_half - function to print half characters of a string.
* @str: parameter to hold the value of a string.
* Return: void.
*/
void puts_half(char *str)
{
int n;
int count = 0;
int i;

for (i = 0; str[i] != '\0'; i++)
count++;

n = count / 2;

if (count % 2 != 0)
n = count - ((count - 1) / 2);

for (i = n; i < count; i++)
_putchar(str[i]);
_putchar('\n');
}
