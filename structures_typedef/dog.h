#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog in years
 * @owner: Owner of the dog
 *
 * Description: Defines a dog with its name, age, and owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
