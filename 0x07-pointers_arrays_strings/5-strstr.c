#include "holberton.h"
/**
* _strstr - function that locates a substring.
* @haystack: parameter for first occurrence of the substring.
* @needle: parameter for substring.
*
* Return: Nothing.
*/
char *_strstr(char *haystack, char *needle)
{
unsigned int i;

if (*needle == '\0')
return (haystck);

for (i = 0; *(haystack + i) != '\0'; i++)
{
if (*(haystack + i) == *needle)
{
char *ptr = _strstr(haystack + i + i, needle + i);
return ((ptr) ? ptr - 1: NULL);
}
}
return (NULL);
}
