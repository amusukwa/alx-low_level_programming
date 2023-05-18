#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:pointer
 * @old_size:allocated size for ptr
 * @new_size:new size of memory block
 * Return:no return type
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *nptr;
unsigned int i = 0;

if (new_size == old_size)
	return (ptr);
if (ptr == NULL)
{
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);
return (nptr);
}
else
{
if (new_size == 0)
{
free(ptr);
return (NULL);
}
nptr = malloc(new_size);
if (nptr == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
{
nptr[i] = ((char *) ptr)[i];
}
free(ptr);
return (nptr);
}
}
