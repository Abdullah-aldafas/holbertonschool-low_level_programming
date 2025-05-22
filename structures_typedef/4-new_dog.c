#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog
 *
 * Return:  pointer to new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, x, z;
	char *temp, *add;
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{}
	for (j = 0; owner[j] != '\0'; j++)
	{}
	temp = malloc(i + 1);
	if (temp == NULL)
	{
		free(d);
		return (NULL);
	}
	for (x = 0; x <= i; x++)
		temp[x] = name[x];
	d->name = temp;
	d->age = age;
	add = malloc(j + 1);
	if (add == NULL)
	{
		free(d);
		free(temp);
		return (NULL);
	}
	for (z = 0; z <= j; z++)
		add[z] = owner[z];
	d->owner = add;
	return (d);
}
