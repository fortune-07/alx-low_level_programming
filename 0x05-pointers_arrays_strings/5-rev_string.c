#include "holberton.h"
#include "_putchar.c"
/**
* rev_string - code used to reverse a string.
* @str: holds the value of the string.
*
* Return: void.
*/
void rev_string(char *str)
{
int count = 0;
int i = 0;
char *str_ptr;
char *end_ptr;
char temp;

str_ptr = str;
end_ptr = str;

while (str[count])
count++;
for (i = 0; i < count - 1; i++)
end_ptr++;

for (i = 0; i < count--; i++)
{
temp = *end_ptr;
*end_ptr = *str_ptr;
*str_ptr = temp;

str_ptr++;
end_ptr--;
}
}
