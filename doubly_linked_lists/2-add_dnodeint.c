#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @n: An input intger
 * @head : input pounter to pounter
 * Return:  adds a new node at the beginning
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add = malloc(sizeof(dlistint_t);

			if (add == NULL)
			{
			return (NULL);
			}

			add->n = n;
			add->next = *head;
			add->prev = NULL;

			if (*head != NULL)
			(*head)->prev = add;
			*head = add;

			return (add);
}
