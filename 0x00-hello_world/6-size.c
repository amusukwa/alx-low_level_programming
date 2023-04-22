#include <stdio.h>

/**
 *main - Entry point
 *
 *Description : Program that prints out sisez of data types
 *
 *Return: Always 0(Success)
 */

int main(void)
{
printf("Size of int:%lu byte(s)\n", sizeof(char));
printf("Size of long int:%lu byte(s)\n", sizeof(int));
printf("Size of long int:%lu byte(s)\n", sizeof(long int));
printf("Size of long int:%lu byte(s)\n", sizeof(long long int));
printf("Size of long int:%lu byte(s)\n", sizeof(float));

return (0);
}
