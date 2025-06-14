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
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @str: An input pointer
 * @head: An input pointer to pointer
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
