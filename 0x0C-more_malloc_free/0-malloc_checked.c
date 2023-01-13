#include <stdlib.h>
/**
 * malloc_checked - allocates memory of a certain size
 * Return: pointer to allocated memory
 * @b: size of memory to allocate
 */
void *malloc_checked(unsigned int b)
{
	char *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
