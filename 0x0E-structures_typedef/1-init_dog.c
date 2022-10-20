#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type c@d
 *
 * @d: the dog
 * @name: name of teh dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
