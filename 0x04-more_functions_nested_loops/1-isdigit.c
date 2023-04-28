#include "main.h"

/**
 * _isdigit - checks for a digit in character
 *
 * @i: input to be checked
 *
 * Return: 1 if its digit 0 otherwise
 */
int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

