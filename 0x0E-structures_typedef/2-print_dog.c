#include "dog.h"
#include <stdio.h>

#define NILL "(nill)"

/**
 * print_dog - prints a struct dog
 *
 * @d: struct dog passed to function
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = NILL;
	if (d->owner == NULL)
		d->owner = NILL;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
