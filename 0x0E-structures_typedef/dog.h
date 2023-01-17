#ifndef _DOG_H_
#define _DOG_H_

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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* _DOG_H_ */