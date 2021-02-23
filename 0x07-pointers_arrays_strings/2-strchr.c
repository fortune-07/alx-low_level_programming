#include "holberton.h"
/**
* _strchr - function that locates a character to a string.
* @s: A parameter that holds the value of a string.
* @c: A parameter that holds the value of character.
*
* Return: Nothing
*/
char *_strchr(char *s, char c)
{
unsigned int i, len;
char *f;

f = 0;
i = 0;
len = 0;

while (*(s + len) != '\0')
len++;
while (i <= len)
{
if (*(s + i) == c)
{
f = s + i;
break;
}
i++;
}
if (f)
return (f);
else
return (0);
}
