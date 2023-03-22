#ifndef DOG_H_
#define DOG_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - information about a specific dog
 *
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 *
 * Description: Information about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for type struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
