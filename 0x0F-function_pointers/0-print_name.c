#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name.
 * @name:name to be printed
 * @f: Pointer function to print name
 * Return:no return type
 */
void print_name(char *name, void (*f)(char *))
{
if (f == NULL || f == NULL)
return;
f(name);
}
