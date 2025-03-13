#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - caracteristique du chien
 * @name: char *
 * @age: float
 * @owner: char *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
