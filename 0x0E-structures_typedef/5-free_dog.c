#include "dog.h"
#include <stdlib.h>
/**
 * free_dog -frees the memory allocated for dog struct
 * @d: pointer to the memory allocated
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if(d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
