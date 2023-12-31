#include "function_pointers.h"
/**
  * print_name - name function
  *@name: char
  *@f: function
  *Return: Always 0
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
