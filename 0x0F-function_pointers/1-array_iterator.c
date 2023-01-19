#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each elemnt of an array
 * @array: pointer to an array
 * @size: size of the array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
