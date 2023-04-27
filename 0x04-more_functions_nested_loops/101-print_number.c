#include "main.h"

/**
 * main - entry point
 *
 * Return: o Always
 *
 */
void print_numbers(int n)
{

        if (n < 0) {
       _ putchar('-');
        n = -n;
    }

     if (n/10)
        _putchar(n/10);

   
    putchar(n%10 + '0');
}

