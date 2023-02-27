#include "main.h"

/**
 * _strcpy - convert
 * @dest: okay ish de
 * @src: value
 * Return: Integer
 */

char *_strcpy(char *dest, char *src)

{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
