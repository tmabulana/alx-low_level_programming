#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - this is the new struct whose variable
 * is to be initialized
 * @d: the pointer to the struct of the new dog
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 * Return: 0 always
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d = malloc(sizeof(struct dog));
if (d == NULL)
return;
(*d).name = name;
d->age = age;
d->owner = owner;
}
