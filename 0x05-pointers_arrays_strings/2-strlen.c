#include "holberton.h"
/**
 * _strlen - function to get the length of a string.
 *@s: holds the character value of s.
 * Return: Always 0.
 */

int _strlen(char *s)
{
int len = 0;
int i;
for (i = 0;
s[i] != '\0';
i++)
len++;
return (len);
}
