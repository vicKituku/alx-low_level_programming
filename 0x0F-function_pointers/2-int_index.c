#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer and returns the index or -1
 * @array: array to be searched
 * @size: size of the array
 * @cmp: function pointer
 * Return: index of first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
