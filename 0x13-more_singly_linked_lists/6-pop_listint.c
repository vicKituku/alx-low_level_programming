#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (*head != NULL)
	{
		h = *head;
		n = h->n;
		*head = h->next;
		return (n);
	}else{
		return (0);
	}
}
		

