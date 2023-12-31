#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a struct that will create a dog info
 * @name: this is the name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
