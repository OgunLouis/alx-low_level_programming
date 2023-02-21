#include "main.h"

/**
 * print_last_digit - checks for loewrcase
 * @n: character to be checked
 * Return: 1 for lowercase char or 0 for uppercsse char
 */

int print_last_digit(int n)

{
	int last;
	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
