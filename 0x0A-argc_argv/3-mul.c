#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiples two numbers
 * @argc:argument count
 * @argv:argument vector
 * Return: 0 Always(success)
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);		
printf("%d\n", a * b);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}                                                                                                   
