#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new struct dog
 * @name: first argument
 * @age: second argument
 * @owner: third argument
 *
 * Return: new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_p;
	size_t i;

	if (name == NULL)
		return (NULL);

	if (owner == NULL)
		return (NULL);

	dog_p = malloc(sizeof(dog_t));
	if (dog_p == NULL)
	{
		free(dog_p);
		return (NULL);
	}
	dog_p->name = malloc(sizeof(char *) * strlen(name) + 1);
	if (dog_p->name == NULL)
	{
		free(dog_p->name);
		free(dog_p);
		return (NULL);
	}
	dog_p->owner = malloc(sizeof(char *) * strlen(owner) + 1);
	if (dog_p->owner == NULL)
	{
		free(dog_p->name);
		free(dog_p->owner);
		free(dog_p);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		dog_p->name[i] = name[i];

	dog_p->name[i] = '\0';
	dog_p->age = age;
	for (i = 0; i < strlen(owner); i++)
		dog_p->owner[i] = owner[i];

	dog_p->owner[i] = '\0';
	return (dog_p);
}
