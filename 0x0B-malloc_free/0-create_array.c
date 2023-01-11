#include <stdlib.h>
/**
 * create_array - creates arrays of char
 * Return: pointer to an array of char
 * @size: size of the array
 * @c: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc((size) * sizeof(char));
	if (size == 0)
		return (NULL);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
