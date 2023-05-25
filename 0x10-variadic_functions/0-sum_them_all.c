#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n:amount of argument
 * @..: rest of arguments
 * Return:returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
va_list valist;
unsi
	va_list ap;
		unsigned int i, sum = 0;


		va_start(ap, n);


		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);


		va_end(ap);


		return (sum);

