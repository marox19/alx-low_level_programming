#include "main.h"
/**
  * *_strpbrk - Entry point
  *@s: char
  *@accept: char
  *Return: char
  */
char *_strpbrk(char *s, char *accept)
{
	 int r;

	 int l;

	 char *p;

	 r = 0;
	while (s[r] != '\0')
	{
		while (accept[l] != '\0')
		{
			if (accept[l] == s[r])
			{
				p = &s[r];
				return (p);
			}
			l++;
		}
		r++;
	}
	return (0);
}
