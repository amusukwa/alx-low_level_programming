#include "dog.h"
#include <stddef.h>

/**
 * struct dog - a struct that has a dogs info
 * @name:first member
 * @age:second member
 * @owner:third member
 * Return:no return type
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if ( d != NULL)
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
}
