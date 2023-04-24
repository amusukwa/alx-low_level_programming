#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 */
int main(void)
{
        int a = '0';
        int b = '0';
	int c = '0';

        while (a <= '9')
        {
		while(b <= '9')
		{
                while (c <= '9')
                {
                        if (!(a > b && b > c || a == b && b == c))
                        {
                                putchar(a);
                                putchar(b);
				putchar(c);
                                if (b == '8' && c == '9')
                                {
                                        putchar('\n');
                                }
                                else
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                        c++;
                }
		b++;
		}
                a++;
        }
        return (0);
}
             
