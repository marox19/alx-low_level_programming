#include "main.h"
/**
  * print_diagsums - Entry point
  *@a: int
  *@size: int
  *Return: 0
  */
void print_diagsums(int *a, int size)
{
	int r;

	int s1;

	int s2;

	s1 = 0;
	s2 = 0;
	for (r = 0; r < size; r++)
	{
		s1 += a[r];
		s2 += a[size - r - 1];
		a += size;
	}
	printf("%d,", s1);
	printf("%d\n", s2);
}
