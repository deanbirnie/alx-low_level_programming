#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - information for a new dog
 *
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 *
 * Return: new dog's info, ndog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int name_p = 0, own_p = 0;

	if (name != NULL && owner != NULL)
	{
		name_p = _strlen(name) + 1;
		own_p = _strlen(owner) + 1;
		ndog = malloc(sizeof(dog_t));

		if (ndog == NULL)
			return (NULL);

		ndog->name = malloc(sizeof(char) * name_p);

		if (ndog->name == NULL)
		{
			free(ndog);
			return (NULL);
		}

		ndog->owner = malloc(sizeof(char) * own_p);

		if (ndog->owner == NULL)
		{
			free(ndog->name);
			free(ndog);
			return (NULL);
		}

		ndog->name = _strcpy(ndog->name, name);
		ndog->owner = _strcpy(ndog->owner, owner);
		ndog->age = age;
	}

	return (ndog);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
