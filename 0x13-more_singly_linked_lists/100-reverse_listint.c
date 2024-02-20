#include "lists.h"
/**
 * reverse_listint - function that revrse a linked list
 * @head: pointer to pointer to the first node of a linked list
 * Return: Always 0 (success)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *ptr;

	temp = *head;
	ptr = *head;
	*head = NULL;
	while (temp != NULL)
	{
		ptr = temp->next;
		temp->next = *head;
		*head = temp;
		temp = ptr;
	}
	return (*head);
}
