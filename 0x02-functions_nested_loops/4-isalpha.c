#include "main.h"

/**
 * _isalpha - checks for loewrcase
 * @c: character to be checked
 * Return: 1 for lowercase char or 0 for uppercsse char
 */

int _isalpha(int c)

{
	if  ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
