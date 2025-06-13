#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list_t list.
 * @h: An input pounter
 * Return:  the number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
