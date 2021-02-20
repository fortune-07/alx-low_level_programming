#include "holberton.h"
/**
* puts2 - function to printer every character of a string from the first one.
* @str: holds the value of the string.
* Return: void.
*/
void puts2(char *str)
{
int count = 0;
int i;

for (i = 0; str[i] != '\0'; i++)
count++;

for (i = 0; i < count; i += 2)
_putchar(str[i]);

_putchar('\n');
}
