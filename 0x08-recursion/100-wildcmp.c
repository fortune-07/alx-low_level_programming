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
while (*s1== *s2)
{
if (*s1 == '\0' || *s2 == '\0')
break;
s1++;
s2++;
}
 
if (*s1 == '\0' && *s2== '\0')
return (0);
else
return (-1);
}
