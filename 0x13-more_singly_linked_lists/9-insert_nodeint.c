#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node at agiven position
 * @head: pointer to the first node
 * @idx: index
 * @n: data for the new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int i;

	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	ptr = *head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == (idx - 1))
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
