#include "holberton.h"
/**
* _strlen_recursion - function that returns the length of a string.
* @s: hold the value of a integer.
*
* Return: Always 0.
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen_recursion(++s));
}
