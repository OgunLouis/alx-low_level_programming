#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

{
int r;

r = is_palindrome("level");
printf("%d\n", r);
r = is_palindrome("redder");
printf("%d\n", r);
r = is_palindrome("test");
printf("%d\n", r);
r = is_palindrome("step on no pets");
printf("%d\n", r);
return (0);
}
