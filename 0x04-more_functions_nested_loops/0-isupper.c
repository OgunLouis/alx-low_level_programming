#include "main.h"

/**
 * _isupper - check
 * @c: the number
 * Return: 1 for upper letter and 0 for lower
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
