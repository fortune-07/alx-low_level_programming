#include "holberton.h"
/**
* wildcmp - function that compares two strings.
* @s1: holds value of first string.
* @s2: holds value of second string.
*
* Return: 0.
*/
int wildcmp(char *s1, char *s2)
{
int i = 0, flag = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{

if (s1[i] != s2[i])
{
flag = 1;
break;
}
i++;
}

if (flag == 0 && s1[i] == '\0' && s2[i] == '\0')
return (1);
else
return (0);
}
