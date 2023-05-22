#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - a struct that has a dogs info
 * @name:first member
 * @age:second member
 * @owner:third member
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - typedef for a struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
