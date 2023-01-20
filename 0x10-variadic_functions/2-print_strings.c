#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Print strings
 * @separator: separates the printed strings
 * @n: number of strings passed to the function
 * Return: nothing;
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char *) != NULL)
			printf("%s", va_arg(ap, char *));
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
