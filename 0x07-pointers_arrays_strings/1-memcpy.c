#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest:destination of copied memory
 * @src:source of copied memmory
 * @n:size of n bytes
 * Return:pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = n;

for (; i < j; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
