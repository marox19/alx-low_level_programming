#include "main.h"
/**
  * _isdigit -  Entry point
  *@c: intiger
  *Return: 1 when digit. Otherwise 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
