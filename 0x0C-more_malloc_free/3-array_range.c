#include "main.h"
/**
  * *array_range - ENtru point
  *@min: int
  *@max: int
  *Return: Null
  */
int *array_range(int min, int max)
{
	int l;

	int i;

	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (!ptr)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = min++;
	return (ptr);
}

