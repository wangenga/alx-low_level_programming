#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to an element of the type dog
 * @name: pointer to a char for name of dog
 * @age: age of dog
 * @owner: pointer to a char for the owner f the dog
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
