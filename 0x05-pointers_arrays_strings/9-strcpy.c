#include "main.h"
/**
  * *_strcpy - Entry point
  *@dest: int
  *@src: int
  *Return: Always 0
  */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
