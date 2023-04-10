#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initializes a variable of type struct dog.
* @d: dog.
* @name: the one and only d's name.
* @age: d's age.
* @owner: d's owner.
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
