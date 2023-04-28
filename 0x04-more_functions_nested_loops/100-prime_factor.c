#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0 Always
 */
int main(void)
{
int c;
long int i, j, lp, num  = 612852475143;

for (i = 2; i < num / 2; i++)
{
prime = i;

if (num % i == 0)
{
lp = num / i;
}

for (j = 2; j < lp / 2; j++)
{
if (lp % j == 0)
{
prime = 0;
break;
}
if (prime)
{
printf("%ld\n", lp);
break;
}
}
return (0);
}
