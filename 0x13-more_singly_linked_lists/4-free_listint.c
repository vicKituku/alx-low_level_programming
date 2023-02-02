#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees memory allocated by the linked list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
