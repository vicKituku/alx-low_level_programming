#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * Return: pointer to allocated memory for the array
 * @nmemb: number of members for the array
 * @size: size of each member in bytes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		t[i] = 0;
	return (t);
}
