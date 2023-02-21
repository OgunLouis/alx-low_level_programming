#include "main.h"

/**
 * print_sign - checks for loewrcase
 *@n: character to be checked
 * Return: 1 for lowercase char or 0 for uppercsse char
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
