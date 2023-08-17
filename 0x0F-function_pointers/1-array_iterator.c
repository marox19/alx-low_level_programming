#include "function_pointers.h"
/**
  * array_iterator - Entry point
  *@array: char
  *@size: int
  *@action: kalb
  *Return: funciton
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
