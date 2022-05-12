#ifndef DOG
#define DOG
/**
 * struct dog - combines name age and owner of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner:owner's name
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
