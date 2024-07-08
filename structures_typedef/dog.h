#ifndef D
#define D

/**
 * struct dog - description of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner:  owner of the dog
 */

struct dog
{
char *name;
float age;
char *owner;
};
#endif

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
