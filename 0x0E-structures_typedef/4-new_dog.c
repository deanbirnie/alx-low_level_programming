#include "dog.h"

/**
 * _strlen - length of string
 *
 * @str: string passed to function
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int len = 0;
	while (str)
	{
		len++;
	}

	return (len);
}

/**
 * _strcopy - copy string pointed by src
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: copied string
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (; src[index] ; index++)
	{
		dest[index] = src[index];
	}

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if NULL input
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
