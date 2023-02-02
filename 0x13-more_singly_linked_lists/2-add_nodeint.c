#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: pointer to the first node
 * @n: data
 * Return: Address of the new element. Null if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new =  malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;

		*head = new;
		return (*head);
	}
	return (NULL);
}
