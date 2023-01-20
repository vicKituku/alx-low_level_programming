#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sums all its parameters
 * @n: number of arguments expected
 * @...: the rest of the arguments
 * Return: sum of the arguments past in
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}

