#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - prints a dogs info
 * @d:dog structure
 * Return:no return type
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("Name: %s\n", (d->name) ? d->name : ("nil"));
printf("Age: %.6f\n", (d->age) ? d->age : 0);
printf("Ownwer:%s\n", (d->owner) ? d->owner : ("nil"));
}
}
