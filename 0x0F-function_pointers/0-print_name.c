#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name -prints a name
 * @name: string literal
 * @f: function pointer that returns void
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *));
{
	f(name);
}
