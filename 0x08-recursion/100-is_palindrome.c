include "main.h"

/**
* _strlen_recursion - Returns the length of a string.
* @s: The string to be measured.
*
* Return: The length of the string.
*/

int _strlen_recursion(char *s)

{
if (!*s)
{
	return (0);
}
return (1 + _strlen_recursion(++s));

}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @l: position
 * Return: boolean
 */

int p1(char *s, int l)
{
	if (l < 1)
	{
		return (1);
	}

	if (*s == *(s + 1))
	{
		return (p1(s + 1, 1 - 2));
	}
}

/**
 * is_palindrome - pal
 * @s: pointer
 * Return: recursion
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
