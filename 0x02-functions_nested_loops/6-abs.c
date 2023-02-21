#include "main.h"
#include <stdio.h>

/**
 * _abs - checks for loewrcase
 * @c: character to be checked
 * Return: 1 for lowercase char or 0 for uppercsse char
 */

int _abs(int c)

{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
