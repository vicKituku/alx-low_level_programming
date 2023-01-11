#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a string into a newly allocated space
 * Return: pointer to the newly allocated mem
 * @str: pointer
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int size;

	i = 0;
	size = strlen(str);
	if (str == NULL)
	{
		return (NULL);
	}
	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
