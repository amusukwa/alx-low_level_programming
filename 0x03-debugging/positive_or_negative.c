#include "main.h"
/**
 *positive_or_negative - a function that tests negative or positive 
 *
 *Return: no return value
 */
void positive_or_negative(int i)
{
	if (i > 0)
	printf("%d is positive\n", i);
	else if (i == 0)
	printf("%d is zero\n", i);
	else
	printf("%d is negative\n", i);
}
