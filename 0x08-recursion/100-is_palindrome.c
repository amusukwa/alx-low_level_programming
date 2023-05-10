#include "main.h"
/**
 *_strlen_recursion - return string length.
 *@s:input string
 *Return:string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * compare - compares string character
 * @s:input string
 * @n1:smallest iterator
 * @n2:biggest iterator
 * Return:.
 */
int compare(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + compare(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s:input string
 * Return:return 1 if string, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare(s, 0, _strlen_recursion(s) - 1));
}
