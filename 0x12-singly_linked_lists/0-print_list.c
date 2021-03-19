#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_list - print all elements of a linked list
* @h: pointer to linked list
* Return: number of nodes in linked list
**/
size_t print_list(const list_t *h)
{
int i = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
h = h->next;
i++;
}
printf("[%u] %s\n", h->len, h->str);
h = h->next;
i++;
}
return (i);
}
