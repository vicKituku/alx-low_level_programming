#include "lists.h"
/**
 * sum_listint - Calculates the sum of data in the list
 * @head: pointer to the first node
 * Return: Sum of the data elements or 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return  (0);
}
