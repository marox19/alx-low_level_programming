#include "main.h"
/**
  * *cap_string - Entry point
  *@str: char
  *Return: 0
  */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i <= 65 && i >= 90)
		{
			str[i] = str[i] + 32;
		}
	}
	return (str);
}
