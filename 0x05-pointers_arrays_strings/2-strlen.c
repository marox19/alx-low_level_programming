#include "main.h"
/**
  * _strlen - Entry point
  *@s: charecter
  * Return: Always 0 when success
  */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
		++l;
	return (l);
}
