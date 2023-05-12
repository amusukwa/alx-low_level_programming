#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguments of a program
 * @argc:argument count
 * @argv:argument vector
 * Return: 0 Always(success)
 */
int main(int argc, char *argv[])
{
int i = 0;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
