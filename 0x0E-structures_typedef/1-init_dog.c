#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * struct dog - dog structure
 *
 * @name: Name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
