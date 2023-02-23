#include "main.h"

/**
 * _isdigit - check
 * @c: the number
 * Return: 1 for upper letter and 0 for lower
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
