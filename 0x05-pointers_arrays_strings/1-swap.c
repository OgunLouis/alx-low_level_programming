#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps
 * @a: first
 * @b: second
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*swap out */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
