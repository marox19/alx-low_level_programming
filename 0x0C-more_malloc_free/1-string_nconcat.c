#include "main.h"
/**
  * *string_nconcat - ENTRY point
  *@s1: int
  *@s2: int
  *@n: int
  *Return: Always 0
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	unsigned int i;

	unsigned int j;

	unsigned int s1l;

	unsigned int s2l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1l = 0; s1[s1l] != '\0'; s1l++)
		;
	for (s2l = 0; s2[s2l] != '\0'; s2l++)
		;
	str = malloc(s1l + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
