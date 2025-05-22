#include <stdio.h>
#include <stdlib.h>
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
	int i, j;
	char *temp, *add;
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}
	i = strlen(name);
	j = strlen(owner);
	temp = malloc(i + 1);
	if (temp == NULL)
	{
		free(d);
		return (NULL);
	}
	strcpy(temp, name);
	d->name = temp;
	d->age = age;
	add = malloc(j + 1);
	if (add == NULL)
	{
		free(d);
		free(temp);
		return (NULL);
	}
	strcpy(add, owner);
	d->owner = add;
	return (d);
}
