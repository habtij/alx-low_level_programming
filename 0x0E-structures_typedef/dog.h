#ifndef _DOG_H_
#define _DOG_H_

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - A dog blueprint
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: A Dog structure that has members name, age, and owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* _DOG_H_ */
