#include "dog.h"

/**
 * init_dog - a function that initial a dog struct
 * @d: struct argument
 * @name: second argument
 * @age: third argument
 * @owner: fourth argument
 *
 * Return: nothing
 */
void *init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
