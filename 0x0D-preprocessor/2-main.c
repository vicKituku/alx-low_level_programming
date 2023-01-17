#include <stdio.h>
/**
 * main -Prints the name of the file it was compiled from
 * Return: Always 0
 */
int main(void)
{
	char *s;
	int i;

	s = __FILE__;
	for (i = 0; s[i] != '\0'; i++)
		putchar(s[i]);
	putchar('\n');
}
