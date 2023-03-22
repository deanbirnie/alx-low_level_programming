#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the information from struct dog
 *
 * @d: struct dog passed to function
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
