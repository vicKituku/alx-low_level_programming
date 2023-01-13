#include <stdlib.h>
/**
 * string_nconcat - allocates space in memory to store a concatenated string
 * Return: returns a concatenated string
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of string 2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, ph;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	k = i + j;
	m = malloc((k + 1) * sizeof(char));
	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	ph = i;
	for (j = 0; j < (n / sizeof(char); j++, ph++)
			m[ph] = s2[j];
	m[ph + 1] = '\0';
	return (m);
}
