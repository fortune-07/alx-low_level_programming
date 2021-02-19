#include "holberton.h"
/**
 * _strlen - function to get the length of a string.
 *@s: holds the character value of s.
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len;
for (len = 0;
s[len] != '\0';
len++)
len++;
return (len);
}
