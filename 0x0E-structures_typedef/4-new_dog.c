#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - print new dog
 * @name: name
 * @age: age
 * @owner:owner
 * Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i;

	new_d = malloc(sizeof(struct dog));
	if (new_d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	new_d->name = malloc(sizeof(char) * i + 1);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
	}
	new_d->owner = malloc(sizeof(char) * i + 1);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		new_d->name[i] = name[i];
	new_d->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		new_d->owner[i] = owner[i];
	new_d->owner[i] = '\0';
	new_d->age = age;
	return (new_d);
}
