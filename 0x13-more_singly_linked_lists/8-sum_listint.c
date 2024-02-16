#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data(n) of a list
 * @head: pointer to the first node
 * Return: Always 0 (success)
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
