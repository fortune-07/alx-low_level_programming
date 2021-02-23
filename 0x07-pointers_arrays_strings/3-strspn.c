#include "holberton.h"
/**
* _strspn - function that gets a prefix substring.
* @s: holds the value of a string.
* @accept: holds value.
*
* Return: nothing.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, i2, len, len2, pos, pos2;
len = 0;
len2 = 0;
while (*(accept + len2) != '\0')
len2++;

i = 0;
pos = 0;
pos2 = 0;
while (*(s + i) != '\0')
{
if (pos - pos2 > 1)
{
len--;
break;
}
for (i2 = 0; i2 < len2; i2++)
{
if (*(s + i) == *(accept + i2))
{
len++;
pos2 = pos;
pos = i;
break;
}
}
i++;
}
return (len);
}
