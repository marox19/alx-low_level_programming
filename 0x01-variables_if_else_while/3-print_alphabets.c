#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	char d;

	for (c = 'a'; c <= 'z'; ++c)
	putchar(c);
	putchar('\n');
	for (d = 'A'; d <= 'Z'; ++d)
	putchar(d);
	return (0);
}
