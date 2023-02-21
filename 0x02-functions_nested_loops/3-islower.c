#include "main.h"

/**
 * _islower - checks for loewrcase
 * @c: character to be checked
 * Return: 1 for lowercase char or 0 for uppercsse char
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
