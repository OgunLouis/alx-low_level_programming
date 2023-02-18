#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints digits 0 to 10
 * Return: Always (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
