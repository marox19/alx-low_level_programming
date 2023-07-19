#include "main.h"
/**
  * print_sign - Entry point
  * @n: number entered
  * Return: 1 if greater than Zero. 0 if zero. -1 if negative.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
