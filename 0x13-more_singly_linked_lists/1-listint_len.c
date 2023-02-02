#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Returns number of elements in a list
 * @h: head of the list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
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
