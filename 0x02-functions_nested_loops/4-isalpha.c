#include "main.h"
/**
 * _isalpha - Returns 1 a letter,lowercase,uppercase
 * returns 0 otherwise
 * Return: 1 for letter,0 for others
 *
 * @c: Character in ASCii
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}



