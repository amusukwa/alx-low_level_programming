#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  prints strings, followed by a new line
 * @separator:string to be printed between numbers
 * @n:amount of strings
 * @..: rest of arguments
 * Return:no return type
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
