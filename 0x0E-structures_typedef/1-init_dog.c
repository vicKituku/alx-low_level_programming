#include "dog.h"
/**
 * init_dog - Initializes the structure struct dog
 * Return: void
 * @d: pointer to the memory address for the structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
