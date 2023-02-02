#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Prints all the elements of a list
 * @h: head of the list
 * Return: Number of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
