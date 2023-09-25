#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - this is the struct that creates the dog info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the ownwer of the dog
 * Description: first struct with ALX
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
