#include <stdio.h>

/**
 * _strlen - Returns
 * @str: the 
 * Return: length
 */
size_t _strlen(const char *str)

{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
