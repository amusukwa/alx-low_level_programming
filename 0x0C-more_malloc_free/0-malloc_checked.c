#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*malloc_checked -  allocates memory using malloc
*@b:input integer
*Return:no return type
*/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);

if (p == NULL)
exit(98);

return (p);
}
