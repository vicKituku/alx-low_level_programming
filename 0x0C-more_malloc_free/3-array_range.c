#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * Return: pointer to the newly created array
 * @min: min value of the array
 * @max: max value of the array
 */
int *array_range(int min, int max)
{
	int i;
	int *m;

	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= max ; i++)
		m[i] = i;
	return (m);
}
