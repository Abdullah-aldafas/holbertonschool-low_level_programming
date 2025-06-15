#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index
 * @head: An input pounter to pounter
 * @index: An input intger
 * Return:  deletes the node at index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	dlistint_t *temp;

	if (index == 0)
	{
		temp = *head;
	*head = (*head)->next;
	if (*head != NULL)
		(*head)->prev = NULL;
	free(temp);
	return (1);
	}

	return (-1);
}
