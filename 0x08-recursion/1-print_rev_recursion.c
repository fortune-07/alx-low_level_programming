#include "holberton.h"
/**
* _print_rev_recursion - function that prints a string in reverse.
* @s: holds value of an integer.
* Return: Always 0.
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
