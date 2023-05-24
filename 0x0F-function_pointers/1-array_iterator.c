#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function as a parameter on each array element
 * @array:array of items
 * @size:size of array
 * @action:pointer to the function
 * Return:no return type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
	return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
