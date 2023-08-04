#include "main.h"
#include <stdio.h>
/**
 * _islower - Entry point
 * @c: The charecter in ASCII code
 * Return: returns 1 if 'c' is lowercase
 * otherwaysAlways 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
