#include "main.h"
/**
  *rev_string - Entry point
  *@s: cca0cjo
  *Return 0
  */
void rev_string(char *s)
{
	int l, i;

	char temp;

	for (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < l / 2; i++)
	{
		temp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = temp;
	}
}
