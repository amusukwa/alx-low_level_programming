#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line
 * @s:input string
 * Return:no return typr
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_putchar(s + 1);
}
_putchar('\n');
}
