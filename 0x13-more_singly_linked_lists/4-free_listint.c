#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees memory allocated by the linked list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		free(head);
		head = head->next;
	}
}
