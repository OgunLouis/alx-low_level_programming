#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints the last digit of a randomly generated numb
* Return: Always (Success)
*/
int main(void)
{
	int n, las;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	las = n % 10;

	if (las > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, las);
	}
	else if (las == 0)
	{
		printf("Last  digit of %d is %d and is 0\n", n, las);
	}
	else if (las < 6 && las != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, las);
	}
	return (0);
}
