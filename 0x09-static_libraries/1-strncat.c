#include "main.h"
/**
  * *_strncat - Entry point
  *@dest: charecter
  *@src: charecter
  *@n: integer
  *Return: Always 0
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;

	int c;

	c = 0;
	while (dest[c])
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}


