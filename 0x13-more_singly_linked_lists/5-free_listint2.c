#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to pointer to the first node
 * Return: Always 0 (success)
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *prev;

	if (*head == NULL)
	{
		free(head);
	}
	temp = *head;
	while (temp != NULL)
	{
		prev = temp->next;
		free(temp);
		temp = prev;
	}
	*head = NULL;
}
