#include "main.h"
/**
  * *_memcpy-Entry point
  *@dest: char
  *@src: char
  *@n: int
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; n > r; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}
