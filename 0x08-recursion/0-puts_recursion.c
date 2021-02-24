#include "holberton.h"
#include <stdio.h>
/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s - parameter that holds value of a string.
*
* Return: void.
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
_putchar(*s);
printf("%c", *s);
_puts_recursion(++s);
}
