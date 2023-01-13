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

	if (min > max)
		return (NULL);
	m = malloc(sizeof(int) * (max - min + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; min <= max ; i++, min++)
		m[i] = min;
	return (m);
}
