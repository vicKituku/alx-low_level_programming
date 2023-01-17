#include "dog.h"
#include <stdio.h>
/**
 * print_dog -prints memebers of struct dog
 * @d: pointer to struct
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("(nill)\n");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("(nill)\n");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("(nill)\n");
	}
}
