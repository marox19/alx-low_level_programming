#include "main.h"
/**
  * _isalpha - Entry point
  * @c: The charecter in ASCII code
  * Return: 1 for lowercase or upper case. Otherwise 0
  */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
