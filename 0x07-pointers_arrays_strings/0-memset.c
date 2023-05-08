#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s:starting address of memmory
 * @b:desired value
 * @n:number of bytes to be changed
 * Return:returns changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
