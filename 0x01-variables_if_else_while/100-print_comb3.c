#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always(Success)
 *
 */
int main(void)
{
	int a;

	  int a[N] = {0};
    while (next(a+N-1, N) != 10) {
        for (int i = 0; i < N; i++) {
            if (a[i] != 0) printf("%d", a[i]);
        }
        printf("\n");
    }
	return (0);
}
