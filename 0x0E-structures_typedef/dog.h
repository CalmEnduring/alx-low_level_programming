#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure defining a dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Decription: this structure defines a dog by its name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - represents struct dog
 *
 * This typedef is used to provide a shortand for the
 * struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
