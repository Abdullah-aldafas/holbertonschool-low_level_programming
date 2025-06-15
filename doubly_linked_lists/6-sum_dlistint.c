#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n)
 * @head: An input pounter
 * Return: the sum of all the data (n)
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
