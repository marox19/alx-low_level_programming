#include "lists.h"
/**
  * free_listint - Entry point
  *@head: st
  *Return: 0
  */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
