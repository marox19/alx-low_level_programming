#include "main.h"
/**
  * _strspn - Entry point
  *@s: char
  *@accept: char
  *Return: value
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int r;

	unsigned int l;

	for (r = 0; s[r] != '\0'; r++)
	{
		for (l = 0; accept[l] != s[r]; l++)
		{
			if (accept[l] != '\0')
			
				return (l);
			
		}
	}
	return (l);
}
