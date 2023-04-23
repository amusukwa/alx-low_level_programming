#include <stdlib.h>
#include <time.h>
/** 
 * main - Entry point
 *
 * Description - a program that uses the if else statement
 *
 *Return: 0 Always(Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive")
			if (n == 0)
				printf("%d is zero")
			else
				printf("%d is negatve")
	return (0);
}
