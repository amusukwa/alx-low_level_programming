#include "main.h"
/**
 * _strncat -  copy a string
 * @dest:first input as char
 * @src:second input as char
 * @n:third input as integer
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++
}
while (j < n)
{
dest[i] = '\0';
j++;
}
return (dest);
}
