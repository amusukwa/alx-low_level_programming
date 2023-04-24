#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Return: 0 Always(Success)
 *
 */
int main(void)
{
	int n = 127;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
