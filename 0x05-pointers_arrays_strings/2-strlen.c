#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
char *str;
int len;

str = "Holberton!";
len = _strlen(str);
printf("%d\n", len);
return (0);
}

int _strlen(char *s)
{
int i;
i = 0;
while (str[i] !='\0')
{
if (i % 2 == 0)
{
_putchar (str[i]);
}
i++;
}
_putchar('\n');
}
