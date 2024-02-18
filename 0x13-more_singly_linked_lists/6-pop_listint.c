#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: pointer to pointer to the first node of a linked lists
 * Return: Always 0 (success)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *prev;
	int result;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	prev = temp;
	result = temp->n;
	free(prev);
	return (result);
}
