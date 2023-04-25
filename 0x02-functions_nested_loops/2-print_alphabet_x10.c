#include "main.h"

/**
 * void print_alphabet_x10(void) - Prints the alphabet ten times
 *
 * Return: 0 Always (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}