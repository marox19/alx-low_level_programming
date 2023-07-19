#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int l;

	char x;

	for (l = 0; l <= 9; l++)
	{
	for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
	_putchar('\n');
	}
}
