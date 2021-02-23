#include "holberton.h"
/**
* _memset - Fills the first n bytes of the memory area.
* @s: A pointer to the memory area to be filled.
* @b: A parameter to hold the value of character b.
* @n: A parameter to hold value of unsigned integer n.
*
* Return: A pointer to the filled memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
{
for (i = 0; i < n; i++)
s[i] = b;
}
return (s);
}
