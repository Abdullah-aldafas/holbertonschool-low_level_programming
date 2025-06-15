#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -a function that returns the number of elements in a linked
 * @h: An input intger
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
