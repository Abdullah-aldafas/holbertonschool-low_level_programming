#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - a function that count the numer of char
 * @s: An input pointer
 * Return: number of char
 */
unsigned int _strlen(const char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @str: An input pointer
 * @head: An input pointer to pointer
 * Return: the new node in end
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t));
	list_t *temp;

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = NULL;

	if (*head == NULL)
	{
		*head = add;
		return (add);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = add;

	return (add);
}
