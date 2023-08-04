#include "main.h"
/**
  * *_strcat - Entry point
  *@dest: charecter
  *@src: charecter
  *Return: Always 0 success
  */
char *_strcat(char *dest, char *src)
{
	int c;

	int c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];
	return (dest);
}
