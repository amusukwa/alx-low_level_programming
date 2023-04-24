#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - a program that uses while statemenit
 *
 *  Return: 0 Always(Success)
 */
int main(void)
{
	int n = 97;

	while (n >= 122)
	{
		if (n !=  111 && n != 113)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
