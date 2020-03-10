#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - dog structure
 *
 * @name: Name
 * @age: age
 * @owner: owner
 */
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
