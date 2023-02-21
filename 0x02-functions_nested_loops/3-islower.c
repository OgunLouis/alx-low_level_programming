#include "main.h"

/**
 * _islower - checks for loewrcase
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
