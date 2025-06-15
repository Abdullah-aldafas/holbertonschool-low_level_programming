#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * @head: An input pounter to pounter
 * @head: An input intger
 * Return:  adds a new node at the end 
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *add = malloc (sizeof(dlistint_t));

	if (add == NULL)
	{
		return (NULL);
	}

	add->n =n;
	add->next=NULL;
	if (*head == NULL)
	{
		add->prev = NULL;
		*head = add;
		return (add);
	}


	 while (temp->next != NULL)
		 temp = temp->next;

	 add->prev = temp;
	 temp->next = add;

	 return (add);
}
