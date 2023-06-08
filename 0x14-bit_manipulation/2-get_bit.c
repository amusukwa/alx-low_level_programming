#include "main.h"
/**
 * get_bit - prints bits at index position
 * @n:first input parameter
 * @index: index position where bit is printed
 * Return:value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int mask, bit;
if (index >= sizeof(unsigned long int) * 8)
return (-1);
mask = 1UL << index;
bit = n & mask;

return (bit != 0);
}

