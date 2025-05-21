#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf¨("owner: (nil)\n");

	printf("Name: %s \n", d->name);
	printf("Age: %f \n", d->age);
	printf("Owner: %s", d->owner);
}
