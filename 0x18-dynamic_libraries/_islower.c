#include "main.h"

/**
 *  _islower  - checks if parameter c is in lower case
 *
 * @c:The character in ASCII mode
 *
 * Return: 0 Always (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

