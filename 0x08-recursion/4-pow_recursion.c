#include "main.h"
/**
i  * _pow_recursion - Entry point
  *@x: char
  *@y: int
  *Return: ALways 0 success
  */
int _pow_recursion(int x, int y)
{
if (y < 0)

	return (-1);
	
else if (y == 0)

	return (1);
	
else if ( y == 1)

	return (x);

	return (x * _pow_recursion(x, y - 1));
}
