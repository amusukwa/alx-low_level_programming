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
char charType;
int intType;
long int longintType;
long long int longlongType;
float floatType;

printf("Size of char:%lu byte(s)\n,"sizeof(charType));
printf("Size of int:%lu byte(s)\n,"sizeof(intType));
printf("Size of long int:%lu byte(s)\n,"sizeof(longintType));
printf("Size of long long int:%lu byte(s)\n,"sizeof(longlongType));
printf("Size of float:%lu byte(s)\n,"sizeof(floaType));

return (0);
}
