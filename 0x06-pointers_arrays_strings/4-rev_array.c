#include "main.h"
/**
  * reverse_array - Entry point
  *@a: int
  *@n: int
  * Return: Nothing
  */
void reverse_array(int *a, int n)
{
	int i;

	int j;
	
	int t;

	for (i = 0, j = (n - 1); i < j; i++; j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
