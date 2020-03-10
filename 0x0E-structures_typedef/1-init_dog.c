#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - init dog
 *
 * @d: value
 * @name: Name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
