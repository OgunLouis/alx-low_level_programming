#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always (Success)
 */
int main(void)

{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
		putchar(lower);
	putchar('\n');
	return (0);
}
