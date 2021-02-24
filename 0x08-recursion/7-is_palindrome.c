#include "holberton.h"
/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: parameter string that holds value of an integer.
*
* Return: Always 0.
*/
int is_palindrome(char *s)
{
int i;
int e;

if (i == e)
return (true);

if (s[i] != s[e])
return (false);

if (i < e + 1)
return (is_palindrome(s, i + 1, e - 1)); 
  
return (true);
}
