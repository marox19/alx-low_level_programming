#include "function_pointers.h"
/**
  * int_index - ENtry po8iig
  *@array: char
  *@size: int
  *@cmp: ma3rafsh
  *Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

    if (array && size && cmp)
	
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
	
		}
		return (-1);
	
}
