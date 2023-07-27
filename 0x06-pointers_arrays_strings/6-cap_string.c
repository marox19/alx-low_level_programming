#include "main.h"
/**
  * *cap_string - Entry point
  *@str: char
  *Return: 0
  */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}
int isDelimiter(char c)
{
	int i;

	char delimiter[] = " \t\n, .!?\"()()";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (i);
	return (0);
}
char *cap_string(char *s)
{
	char *ptr = s;

	int f = 1;
	
	while (*s)
	{
		if (isDelimiter(*s))
			f = 1;
	else if (isLower(*s) && f)
	{
		*s -= 32;
		f = 0;
	}
	else 
		f = 0;
	s++;
	}
	return (ptr);
}
