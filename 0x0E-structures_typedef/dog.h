#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type describing a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Define a new type struct dog with
 * the following elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
