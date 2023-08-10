#include "main.h"
/**
  *_memset - Call function
  *@s: pointer
  *@b: pointer
  *@n: max bytes
  *Return: Always
  */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
/**
  * *_calloc - Entry point
  *@nmemb: un int
  *@size: int
  *Return: Always 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);
	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
