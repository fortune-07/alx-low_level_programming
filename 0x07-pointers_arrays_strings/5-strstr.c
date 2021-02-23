#include "holberton.h"
#include <stdio.h>
/**
* _strstr - function that locates a substring.
* @haystack: parameter for first occurrence of the substring.
* @needle: parameter for substring.
*
* Return: NULL.
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *begin = haystack;
char *pattern = needle;

while (*haystack && *pattern && *haystack == *pattern)
{
haystack++;
pattern++;
}
if (!*pattern)
return (begin);
haystack = begin + 1;
}
return (NULL);
}
