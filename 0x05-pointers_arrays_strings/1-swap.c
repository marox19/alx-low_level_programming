#include "main.h"
/**
  * swap_int - Entry point
  *@a: integer value
  *@b: integer
  * Return: Always 0 sucess
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
