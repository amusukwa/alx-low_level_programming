#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates array of chars, initializes with a specific char
 * @size:size of array
 * @c:char to be initialized
 * Return:return pointer to array
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *str;
str = malloc(sizeof(char) * size);

if (size == 0 || str == 0)
return (NULL);


for (i = 0; i < size; i++)
str[i] = c;
return (str);
}
