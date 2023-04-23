#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  main - Entry point
 *
 *  Return: 0 Always(Success)
 */
int main(void)
{
        int n = 97;

        while (n <= 122)
        {
                if (n == 101 || n == 111)
                n++;
                putchar(n);
        }
        putchar('\n');
        return (0);
}
