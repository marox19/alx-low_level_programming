#include "main.h"
/**
  *print_chessboard - Entry point
  *@a: char
  *Return: 0
  */
void print_chessboard(char (*a)[8])
{
	int r;

	int l;

	for (r = 0; r < 8; r++)
	{
		for (l = 0; l < 8; l++)
		{
			_putchar(a[r][l]);
		}
		_putchar('\n');
	}
}
