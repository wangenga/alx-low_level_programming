#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: pointer to the name of the doog
 * @age: age of thedog
 * @owner: pointer to a char of the owner
 * Return: pointer to a ew dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen, i;
	dog_t *d1;

	d1 = (dog_t *)malloc(sizeof(dog_t));
	if (d1 == NULL)
		return (NULL);
	namelen = ownerlen = 0;
	while (name[namelen++])
		;
	while (owner[ownerlen++])
		;
	d1->name = malloc(namelen * sizeof(d1->name));
	if (d1->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= namelen; i++)
		d1->name[i] = name[i];
	d1->age = age;
	d1->owner = malloc(ownerlen * sizeof(d1->owner));
	if (d1->owner == NULL)
	{
		free(d1->name);
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= ownerlen; i++)
		d1->owner[i] = owner[i];
	return (d1);
}
