#include "holberton.h"
/**
* *_strcpy - copies the string pointed to by src
* including the terminating null byte (\0)
* to the buffer pointed to by dest
* @dest: pointer to the buffer in which we copy the string
* @src: string to be copied
*
* Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int i;
i = 0;

while (i >= 0)
{
dest[i] = src[i];
if (src[i] == '\0')
return (dest);
i++;
}
return (dest);
}
