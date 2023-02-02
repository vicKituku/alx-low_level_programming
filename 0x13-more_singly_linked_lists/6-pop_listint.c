#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - Delet the first node
 * @head: pointer to the first node
 * Return: data from the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head != NULL)
	{
		h = *head;
		n = h->n;
		*head = h->next;
		free(h);
		return (n);
	}
	return (0);
}
