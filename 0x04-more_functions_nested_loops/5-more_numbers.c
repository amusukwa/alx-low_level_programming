#include "main.h"

/**
 * more__numbers - prints the numbers, from 0 to 9 10 times
 *
 * Return: no return type
 */
void more_numbers(void)
{
	int x, y;
	
	for (x = 0; x < 10; x++)
	{	
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
	_putchar('\n');
	}
}