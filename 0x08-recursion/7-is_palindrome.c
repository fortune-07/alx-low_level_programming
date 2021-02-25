#include "holberton.h"
/**
* find_strlen - function to find the length.
* @s: holds the value of the string.
*
* Return: 0.
*/
int find_strlen(char *s)
{
int len = 0;

if (*(s + len))
{
len++;
len += find_strlen(s + len);
}
return (len);
}

/**
* check_palindrome - function to check palindrome.
* @s: holds string value.
* @len: value of length.
* @i: holds value of i.
*
* Return: 0.
*/
int check_palindrome(char *s, int len, int i)
{
if (s[i] == s[len / 2])
{
return (1);
}
if (s[i] == s[len - i - 1])
{
return (check_palindrome(s, len, i + 1));
}
return (0);
}

/**
* is_palindrome - returns 1 if a string is a palindrome and 0 if not.
* @s: parameter string that holds value of an integer.
*
* Return: Always 0.
*/
int is_palindrome(char *s)
{
int i = 0;
int len = find_strlen(s);

if (!(*s))
{
return (1);
}
return (check_palindrome(s, len, i));
}
