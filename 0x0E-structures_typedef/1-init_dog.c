#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - dog structure
 *
 * @name: Name
 * @age: age
 * @owner: owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct point my_dog

	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	*d = &my_dog;
	return (d);
}
