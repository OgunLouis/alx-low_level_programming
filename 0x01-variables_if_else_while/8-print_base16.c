#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)
{
	int d;
	char lower;

	for (d = '0'; d <= '9'; d++)
		putchar(d);

	for (lower = 'a'; lower <= 'f'; lower++)
		putchar(lower);
	putchar('\n');
	return (0);
}
