#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_dog - prints a struct dog
* @d: pointer to an element of type dog
* Return: nothing
**/
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
