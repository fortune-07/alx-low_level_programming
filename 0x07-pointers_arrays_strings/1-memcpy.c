#include "holberton.h"
/**
* _memcpy - Fills the first n bytes of the memory area.
* @src: A pointer to the memory area to be filled.
* @dest: The character to fill the memory area with.
* @n: The number of bytes to be filled.
*
* Return: A pointer to the filled memory area @s.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) = *(src + i);

return (dest);
}
