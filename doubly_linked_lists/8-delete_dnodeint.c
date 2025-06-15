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
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);


	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp = *head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}


	if (temp == NULL)
		return (-1);

	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
