#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to the name of the dog in struct
 * @age: dog's age in struct
 * @owner: pointer to dog's owner in struct
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
