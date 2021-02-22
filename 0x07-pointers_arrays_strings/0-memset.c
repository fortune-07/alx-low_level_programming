#include "holberton.h"
/**
* _memset - Fills the first n bytes of the memory area
*      	pointed to by @s with the constant byte @c.
* @s: A pointer to the memory area to be filled.
*
* Return: A pointer to the filled memory area @s.
*/

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i < b; i++)
s[i] = n;

return (s);
}
