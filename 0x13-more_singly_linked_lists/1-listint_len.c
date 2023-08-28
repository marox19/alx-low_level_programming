#include "lists.h"
/**
  * listint_len - Entry point
  *@h: string
  *Return: Number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
