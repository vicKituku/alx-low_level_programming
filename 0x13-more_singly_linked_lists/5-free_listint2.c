#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - Frees memory and sets head to NULL
 * @head - Memory location of the first node
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *h;
	if (head != NULL)
		h = *head;
	while ((temp = h) != NULL)
	{
		h = h->next;
		free(temp);
	}
	*head = NULL;
}
