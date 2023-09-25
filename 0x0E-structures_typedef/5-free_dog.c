#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - the function to free memeory of dog
 * will be created
 * @d: the pointer to the dog
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
