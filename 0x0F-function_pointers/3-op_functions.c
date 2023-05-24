#include "function_pointers.h"
#include <stdio.h>

/**
 * op_add- adds two integers
 * @array:array that holds an integer
 * @size:elements number
 * @cmp:pointer to the function
 * Return:first element index cmp doesnt return 0
 */
int op_add(int a, int b)
{
int result = a + b;
return (result);
}
