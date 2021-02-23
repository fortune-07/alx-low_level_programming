#include "holberton.h"
/**
* _strpbrk - function that searches a string for any of a set of bytes.
* @s: holds the value of a string.
* @accept: parameter that holds character value.
*
* Return: Nothing.
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, i2, f;
char *pos;
i = 0;
f = 0;
pos = 0;

while (*(s + i) != '\0')
{
i2 = 0;
while (*(accept + i2) != '\0')
{
if (*(s + i) == *(accept + i2))
{
pos = (s + i);
f = 1;
break;
}
i2++;
}
if (f == 1)
break;
i++;
}
return (pos);
}
