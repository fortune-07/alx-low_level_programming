#include "holberton.h"
/**
* _memset - Fills the first n bytes of the memory area
*      	pointed to by @s with the constant byte @c.
* @src: A pointer to the memory area to be filled.
* @dest: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
n = 0;
char *temp;

for (i = 0; i < n; i++)
temp[i] = src[i];

for (i = 0; i < n; i++)
dest[i] = temp[i];

return (src);
}
