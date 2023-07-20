#include "main.h"
/**
  * more_numbers - Entry points
  * Return: Always 0 sucess
  */
void more_numbers(void)
{
	int i;

	int a;

	int r;

	for (i = 0; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			a = r;
			if (a > 9)
			{
				_putchar(1 + 48);
				r = a % 10;
			}
			_putchar(r + 48);
		}
		_putchar('\n');
	}
}
