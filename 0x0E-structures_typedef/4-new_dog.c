#include "dog.h"
#include <stdlib.h>
/**
 * new_dog -creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: returns a pointer to a memory adress storing struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *m;

	m = malloc(sizeof(dog_t));
	if (m == NULL)
		return (NULL);
	m->name = name;
	m->age = age;
	m->owner = owner;
	return (m);
}
