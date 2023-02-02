#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to the first node
 * @index: nth node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if (count == index)
				return (head);
			head = head->next;
			count++;
		}
	}
	return (NULL);
}
