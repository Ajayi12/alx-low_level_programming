#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to pointer to the first node of a linked lists
 * Return: Always 0 (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *nptr;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	nptr = *head;
	*head = nptr->next;
	return (temp->n);
}
