#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initialize the data structures
 *@d: pointer to the structure
 *@name: name member
 *@age: age of member
 *@owner: owner
 *
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
