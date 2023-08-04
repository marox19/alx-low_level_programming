#include "main.h"
/**
  * *_memset - Entry point
  *@s: char
  *@b: char
  *@n: unsigned int
  *Return: Always
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > 0; r++, n--)
	{
		s[r] = b;
	}
	return (s);
}
